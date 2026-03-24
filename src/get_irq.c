/**
 * @file get_irq.c
 * @brief Implement NVIC interrupt inspection and runtime priority update commands for RT-Thread.
 * @details This module exposes the `nvic_irq` MSH command and prints Cortex-M exception
 *          information together with enabled external IRQ entries. The implementation relies
 *          on CMSIS NVIC access functions and selects an STM32-family-specific IRQ name table
 *          at compile time.
 * @author HLY (1425075683@qq.com)
 * @version 1.0
 * @date 2022-12-27
 * @copyright Copyright (c) 2022
 * @note CMSIS provides a portable NVIC access layer across Cortex-M devices. This package
 *       currently ships STM32-specific IRQ name tables and is enabled through RT-Thread package
 *       configuration.
 */

/* Includes ------------------------------------------------------------------*/

/* Private includes ----------------------------------------------------------*/
#include <rtthread.h>
#include <stdlib.h>
#include "board.h"

#ifdef PKG_USING_GET_IRQ_PRIORITY

/**
 * @brief Store an IRQ index and its cached priority for sorting.
 */
typedef struct
{
    rt_uint8_t ldx;          /**< IRQ number used to index @ref irq_name. */
    rt_uint8_t priotity : 4; /**< Cached priority value used by the local sorter. */
} type;

/* Private define ------------------------------------------------------------*/
#define irq_printf rt_kprintf

/**
 * @brief Define the display width reserved for interrupt names.
 */
#define NAME_LEN 30

/**
 * @brief Map Cortex-M system exception numbers to printable names.
 * @details The array is indexed by the negated exception number so that the
 *          existing exception iteration logic can reuse the same lookup table.
 */
static const char * const exception_type_name[] = {
/******  Cortex-M Processor Exceptions Numbers *****************************************************************/
  [-NonMaskableInt_IRQn]   = "NonMaskableInt_IRQn",   /*!< 2 Non Maskable Interrupt                                          */
#if !defined(SOC_SERIES_STM32F4) && !defined(SOC_SERIES_STM32F7)
  [-HardFault_IRQn]        = "HardFault_IRQn",        /*!< 3 Cortex-M Hard Fault Interrupt                                   */
#endif /* !defined(SOC_SERIES_STM32F4) && !defined(SOC_SERIES_STM32F7) */
  [-MemoryManagement_IRQn] = "MemoryManagement_IRQn", /*!< 4 Cortex-M Memory Management Interrupt                            */
#if !defined(SOC_SERIES_STM32F0) && !defined(SOC_SERIES_STM32G0) || !defined(SOC_SERIES_STM32L0)
  [-BusFault_IRQn]         = "BusFault_IRQn",         /*!< 5 Cortex-M Bus Fault Interrupt                                    */
  [-UsageFault_IRQn]       = "UsageFault_IRQn",       /*!< 6 Cortex-M Usage Fault Interrupt                                  */
#endif /* !defined(SOC_SERIES_STM32F0) && !defined(SOC_SERIES_STM32G0) || !defined(SOC_SERIES_STM32L0) */
  [-SVCall_IRQn]           = "SVCall_IRQn",           /*!< 11 Cortex-M SV Call Interrupt                                     */
#if !defined(SOC_SERIES_STM32F0) && !defined(SOC_SERIES_STM32G0) || !defined(SOC_SERIES_STM32L0)
  [-DebugMonitor_IRQn]     = "DebugMonitor_IRQn",     /*!< 12 Cortex-M Debug Monitor Interrupt                               */
#endif /* !defined(SOC_SERIES_STM32F0) && !defined(SOC_SERIES_STM32G0) || !defined(SOC_SERIES_STM32L0) */
  [-PendSV_IRQn]           = "PendSV_IRQn",           /*!< 14 Cortex-M Pend SV Interrupt                                     */
  [-SysTick_IRQn]          = "SysTick_IRQn",          /*!< 15 Cortex-M System Tick Interrupt                                 */
};

/**
 * @brief Hold the printable IRQ names for the selected STM32 family.
 * @details The included header is a data fragment that expands into designated
 *          initializers for this array. Exactly one family table is selected
 *          through the active `SOC_SERIES_STM32*` macro.
 */
static const char * const irq_name[] = {
#if defined(SOC_SERIES_STM32H7)
    #include "inc/irq_stm32h7.h"
#elif defined(SOC_SERIES_STM32F7)
    #include "inc/irq_stm32f7.h"
#elif defined(SOC_SERIES_STM32F4)
    #include "inc/irq_stm32f4.h"
#elif defined(SOC_SERIES_STM32F3)
    #include "inc/irq_stm32f3.h"
#elif defined(SOC_SERIES_STM32F2)
    #include "inc/irq_stm32f2.h"
#elif defined(SOC_SERIES_STM32F1)
    #include "inc/irq_stm32f1.h"
#elif defined(SOC_SERIES_STM32F0)
    #include "inc/irq_stm32f0.h"
#elif defined(SOC_SERIES_STM32G4)
    #include "inc/irq_stm32g4.h"
#elif defined(SOC_SERIES_STM32G0)
    #include "inc/irq_stm32g0.h"
#elif defined(SOC_SERIES_STM32L4)
    #include "inc/irq_stm32l4.h"
#elif defined(SOC_SERIES_STM32L0)
    #include "inc/irq_stm32l0.h"
#else
    #error "Unsupported chips"
#endif
};

/**
 * @brief Return the number of entries in @ref irq_name.
 */
#define IRQ_LEN sizeof(irq_name) / sizeof(irq_name[1])

/* Private function prototypes -----------------------------------------------*/

/**
 * @brief Print a repeated separator character.
 * @param c Character to print.
 * @param len Number of times to print @p c.
 */
rt_inline void object_split(char c, int len)
{
    while (len--) irq_printf("%c", c);
}

/**
 * @brief Print the table header used for external IRQ output.
 */
rt_inline void nvic_irq_header(void)
{
    irq_printf("num IRQ name"); object_split(' ', NAME_LEN - 7); irq_printf("E P A Priotity\n");
    irq_printf("--- --------"); object_split('-', NAME_LEN - 8); irq_printf(" - - - --------\n");
}

/**
 * @brief Print Cortex-M exception entries and their current priorities.
 * @details This helper walks the exception lookup table and prints system
 *          exception names together with the priority reported by CMSIS.
 */
static void nvic_exception_type_get(void)
{
    irq_printf("num exception_type name"); object_split(' ', NAME_LEN - 18); irq_printf("E P A Priotity\n");
    irq_printf("--- -------------------"); object_split('-', NAME_LEN - 19); irq_printf(" - - - --------\n");

    for (rt_int32_t i = -NonMaskableInt_IRQn; i > 0; i--)
    {
        if (exception_type_name[i] == RT_NULL)
            continue;
        irq_printf("%3d ", -i);
        irq_printf("%-*.*s X X X", NAME_LEN, NAME_LEN, exception_type_name[i]);
        irq_printf("    %02d\n", NVIC_GetPriority((IRQn_Type)-i));
    }
}

/**
 * @brief Print one external IRQ entry.
 * @param i IRQ number to query from the NVIC and @ref irq_name table.
 * @details The function prints the IRQ enable, pending, active, and priority
 *          states in the tabular output format used by this package.
 */
static void nvic_irq_get(rt_uint8_t i)
{
    irq_printf("%3d ", i);
    irq_printf("%-*.*s 1", NAME_LEN, NAME_LEN, irq_name[i]);
    NVIC_GetPendingIRQ((IRQn_Type)i) ? irq_printf(" 1") : irq_printf(" 0");
    NVIC_GetActive((IRQn_Type)i)     ? irq_printf(" 1") : irq_printf(" 0");
    irq_printf("    %02d\n", NVIC_GetPriority((IRQn_Type)i));
}

/**
 * @brief Print enabled external IRQs sorted by IRQ number.
 * @details The current implementation iterates the IRQ table in ascending index
 *          order and prints only entries that are enabled in the NVIC.
 */
static void nvic_irq_get_idx(void)
{
    nvic_irq_header();
    for (rt_uint8_t i = 0; i < IRQ_LEN; i++)
    {
        if (NVIC_GetEnableIRQ((IRQn_Type)i))
        {
            nvic_irq_get(i);
        }
    }
}

/**
 * @brief Print enabled external IRQs sorted by cached priority value.
 * @details Enabled IRQ priorities are copied into a temporary buffer and then
 *          sorted in ascending order with a simple bubble sort. The stored
 *          priority value is incremented by one so that zero can continue to
 *          represent an unused entry in the temporary buffer.
 */
static void nvic_irq_get_priotity(void)
{
    type buff[IRQ_LEN];
    rt_uint8_t temp;
    rt_memset(buff, 0, sizeof(buff));

    for (rt_uint8_t i = 0; i < IRQ_LEN; i++)
    {
        if (NVIC_GetEnableIRQ((IRQn_Type)i))
        {
            buff[i].ldx      = i;
            buff[i].priotity = NVIC_GetPriority((IRQn_Type)i) + 1;
        }
    }

    /* Sort cached entries by priority. */
    for (rt_uint8_t i = 0; i < IRQ_LEN - 1; i++)
    {
        for (rt_uint8_t j = 0; j < IRQ_LEN - 1 - i; j++)
        {
            if (buff[j].priotity > buff[j + 1].priotity)
            {
                temp = buff[j].priotity;
                buff[j].priotity = buff[j + 1].priotity;
                buff[j + 1].priotity = temp;

                temp = buff[j].ldx;
                buff[j].ldx = buff[j + 1].ldx;
                buff[j + 1].ldx = temp;
            }
        }
    }

    nvic_irq_header();

    for (rt_uint8_t i = 0; i < IRQ_LEN; i++)
    {
        if (buff[i].priotity)
        {
            nvic_irq_get(buff[i].ldx);
        }
    }
}

#if defined(RT_USING_MSH) || defined(RT_USING_FINSH)
/**
 * @brief Handle the `nvic_irq` MSH command.
 * @param argc Number of command-line arguments.
 * @param argv Argument vector supplied by MSH.
 * @details Supported subcommands are:
 *          - `num`: print enabled IRQs sorted by IRQ number.
 *          - `priority`: print enabled IRQs sorted by priority.
 *          - `set <IRQn> <priority>`: update the runtime priority of a selected IRQ.
 *          When no subcommand is provided, the function prints exception entries
 *          first and then enabled IRQs in IRQ-number order.
 */
static void nvic_irq_msh(uint8_t argc, char **argv)
{
#define IRQ_CMD_IDX               0
#define IRQ_CMD_PRIOTITY          1
#define MOTOR_CMD_SET             2

    size_t i = 0;

    const char* help_info[] =
    {
            [IRQ_CMD_IDX]             = "nvic_irq num        - Get all enable NVIC_IRQ,sort by interrupt number.",
            [IRQ_CMD_PRIOTITY]        = "nvic_irq priority   - Get all enable NVIC_IRQ,sort by interrupt priority from low to high.",
            [MOTOR_CMD_SET]           = "nvic_irq set        - Sets the NVIC IRQ level.",
    };

    if (argc < 2)
    {
        nvic_exception_type_get();
        irq_printf("\n");
        nvic_irq_get_idx();
    }
    else
    {
        const char *operator = argv[1];

        if (!rt_strcmp(operator, "num"))
        {
            nvic_irq_get_idx();
        }
        else if (!rt_strcmp(operator, "priority"))
        {
            nvic_irq_get_priotity();
        }
        else if (!rt_strcmp(operator, "set"))
        {
            IRQn_Type IRQn;
            uint32_t priority;
            if (argc <= 3)
            {
                irq_printf("Usage: nvic_irq set [IRQn] [priority] --Sets the NVIC IRQ level.\n");
                return;
            }

            IRQn = (IRQn_Type)atoi(argv[2]);
            priority = atoi(argv[3]);
            if (IRQn > IRQ_LEN || priority > 15)
            {
                irq_printf("IRQ must be greater than 0 and less than IQR LEN, currently IRQ = %d\n", IRQn);
                irq_printf("priority must be greater than 0 and less than 15, currently priority = %d\n", priority);
                return;
            }
            else
            {
                NVIC_SetPriority(IRQn, priority);
                irq_printf("The interrupt priority for IRQ number %i set to %d\n", IRQn, priority);
            }
        }
        else
        {
            irq_printf("Usage:\n");
            for (i = 0; i < sizeof(help_info) / sizeof(char*); i++)
            {
                irq_printf("%s\n", help_info[i]);
            }
            irq_printf("\n");
        }
    }
}
MSH_CMD_EXPORT_ALIAS(nvic_irq_msh, nvic_irq, nvic_irq <cmd>.);
#endif /* RT_USING_MSH */
#endif /* PKG_USING_GET_IRQ_PRIORITY */

/**
 * @file irq_stm32g0.h
 * @brief 
 * @author HLY (1425075683@qq.com)
 * @version 1.0
 * @date 2022-12-27
 * @copyright Copyright (c) 2022
 * @attention 
 * @par –ﬁ∏ƒ»’÷æ:
 * Date       Version Author  Description
 * 2022-12-27 1.0     HLY     first version
 */
/* Exported constants --------------------------------------------------------*/
  [0]   = "WWDG_IRQn",                /*!< Window WatchDog Interrupt                                       */
  [1]   = "PVD_VDDIO2_IRQn",          /*!< PVD & VDDIO2 Interrupt through EXTI Lines 16 and 31             */
  [2]   = "RTC_IRQn",                 /*!< RTC Interrupt through EXTI Lines 17, 19 and 20                  */
  [3]   = "FLASH_IRQn",               /*!< FLASH global Interrupt                                          */
  [4]   = "RCC_CRS_IRQn",             /*!< RCC & CRS global Interrupt                                      */
  [5]   = "EXTI0_1_IRQn",             /*!< EXTI Line 0 and 1 Interrupt                                     */
  [6]   = "EXTI2_3_IRQn",             /*!< EXTI Line 2 and 3 Interrupt                                     */
  [7]   = "EXTI4_15_IRQn",            /*!< EXTI Line 4 to 15 Interrupt                                     */
  [8]   = "TSC_IRQn",                 /*!< Touch Sensing Controller Interrupts                             */
  [9]   = "DMA1_Channel1_IRQn",       /*!< DMA1 Channel 1 Interrupt                                        */
  [10]  = "DMA1_Channel2_3_IRQn",     /*!< DMA1 Channel 2 and Channel 3 Interrupt                          */
  [11]  = "DMA1_Ch4_5_DMAMUX1_OVR_IRQn",/*!< DMA1 Channel 4 to Channel 5 and DMAMUX1 Overrun Interrupts    */
  [12]  = "ADC1_IRQn",                /*!< ADC1 Interrupt                                                  */
  [13]  = "TIM1_BRK_UP_TRG_COM_IRQn", /*!< TIM1 Break, Update, Trigger and Commutation Interrupt           */
  [14]  = "TIM1_CC_IRQn",             /*!< TIM1 Capture Compare Interrupt                                  */
  [15]  = "TIM2_IRQn",                /*!< TIM2 global Interrupt                                           */
  [16]  = "TIM3_IRQn",                /*!< TIM3 global Interrupt                                           */
  [17]  = "TIM6_IRQn",                /*!< TIM6 global Interrupt                                           */
  [18]  = "TIM7_IRQn",                /*!< TIM7 global Interrupt                                           */
  [19]  = "TIM14_IRQn",               /*!< TIM14 global Interrupt                                          */
  [20]  = "TIM15_IRQn",               /*!< TIM15 global Interrupt                                          */
  [21]  = "TIM16_IRQn",               /*!< TIM16 global Interrupt                                          */
  [22]  = "TIM17_IRQn",               /*!< TIM17 global Interrupt                                          */
  [23]  = "I2C1_IRQn",                /*!< I2C1 Event Interrupt & EXTI Line23 Interrupt (I2C1 wakeup)      */
  [24]  = "I2C2_3_IRQn",              /*!< I2C2, I2C3 Interrupt (combined with EXTI 24 and EXTI 22)        */
  [25]  = "SPI1_IRQn",                /*!< SPI1 global Interrupt                                           */
  [26]  = "SPI2_3_IRQn"               /*!< SPI2/I2S2, SPI3/I2S3 Interrupt                                  */
  [27]  = "USART1_IRQn",              /*!< USART1 global Interrupt & EXTI Line25 Interrupt (USART1 wakeup) */
  [28]  = "USART2_LPUART2_IRQn",      /*!< USART2 + LPUART2 Interrupt                                      */
  [29]  = "USART3_4_5_6_LPUART1_IRQn",/*!< USART3, USART4, USART5, USART6, LPUART1 globlal Interrupts (combined with EXTI 28) */
  [30]  = "CEC_IRQn",                 /*!< CEC Interrupt(combined with EXTI 27)                            */
  [31]  = "AES_RNG_IRQn",             /*!< AES & RNG Interrupt                                             */

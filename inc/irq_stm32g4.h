/**
 * @file irq_stm32g4.h
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
  [0]   = "WWDG_IRQn",              /*!< Window WatchDog Interrupt ( wwdg1_it, wwdg2_it)                   */
  [1]   = "PVD_PVM_IRQn",           /*!< PVD/PVM through EXTI Line detection Interrupt                     */
  [2]   = "RTC_TAMP_LSECSS_IRQn"    /*!< RTC Tamper and TimeStamp and RCC LSE CSS interrupts through the EXTI               */
  [3]   = "RTC_WKUP_IRQn",          /*!< RTC Wakeup interrupt through the EXTI line                        */
  [4]   = "FLASH_IRQn",             /*!< FLASH global Interrupt                                            */
  [5]   = "RCC_IRQn",               /*!< RCC global Interrupt                                              */
  [6]   = "EXTI0_IRQn",             /*!< EXTI Line0 Interrupt                                              */
  [7]   = "EXTI1_IRQn",             /*!< EXTI Line1 Interrupt                                              */
  [8]   = "EXTI2_IRQn",             /*!< EXTI Line2 Interrupt                                              */
  [9]   = "EXTI3_IRQn",             /*!< EXTI Line3 Interrupt                                              */
  [10]  = "EXTI4_IRQn",             /*!< EXTI Line4 Interrupt                                              */
  [11]  = "DMA1_Stream0_IRQn",      /*!< DMA1 Stream 0 global Interrupt                                    */
  [12]  = "DMA1_Stream1_IRQn",      /*!< DMA1 Stream 1 global Interrupt                                    */
  [13]  = "DMA1_Stream2_IRQn",      /*!< DMA1 Stream 2 global Interrupt                                    */
  [14]  = "DMA1_Stream3_IRQn",      /*!< DMA1 Stream 3 global Interrupt                                    */
  [15]  = "DMA1_Stream4_IRQn",      /*!< DMA1 Stream 4 global Interrupt                                    */
  [16]  = "DMA1_Stream5_IRQn",      /*!< DMA1 Stream 5 global Interrupt                                    */
  [17]  = "DMA1_Stream6_IRQn",      /*!< DMA1 Stream 6 global Interrupt                                    */
  [18]  = "ADC_IRQn",               /*!< ADC1 and  ADC2 global Interrupts                                  */
  [19]  = "USB_HP_IRQn",            /*!< USB High Priority global Interrupt                                */
  [20]  = "USB_LP_IRQn",            /*!< USB Low Priority global Interrupt                                 */
  [21]  = "FDCAN1_IT1_IRQn",        /*!< FDCAN1 Interrupt line 1                                           */
  [22]  = "FDCAN2_IT1_IRQn",        /*!< FDCAN2 Interrupt line 1                                           */
  [22]  = "CAN1_SCE_IRQn",          /*!< CAN1 SCE Interrupt                                                */
  [23]  = "EXTI9_5_IRQn",           /*!< External Line[9:5] Interrupts                                     */
  [24]  = "TIM1_BRK_TIM15_IRQn",    /*!< TIM1 Break and TIM15 Interrupts                                   */
  [25]  = "TIM1_UP_TIM16_IRQn",     /*!< TIM1 Update and TIM16 Interrupts                                  */
  [26]  = "TIM1_TRG_COM_TIM17_IRQn",/*!< TIM1 Trigger and Commutation and TIM17 Interrupt                  */
  [27]  = "TIM1_CC_IRQn",           /*!< TIM1 Capture Compare Interrupt                                    */
  [28]  = "TIM2_IRQn",              /*!< TIM2 global Interrupt                                             */
  [29]  = "TIM3_IRQn",              /*!< TIM3 global Interrupt                                             */
  [30]  = "TIM4_IRQn",              /*!< TIM4 global Interrupt                                             */
  [31]  = "I2C1_EV_IRQn",           /*!< I2C1 Event Interrupt                                              */
  [32]  = "I2C1_ER_IRQn",           /*!< I2C1 Error Interrupt                                              */
  [33]  = "I2C2_EV_IRQn",           /*!< I2C2 Event Interrupt                                              */
  [34]  = "I2C2_ER_IRQn",           /*!< I2C2 Error Interrupt                                              */
  [35]  = "SPI1_IRQn",              /*!< SPI1 global Interrupt                                             */
  [36]  = "SPI2_IRQn",              /*!< SPI2 global Interrupt                                             */
  [37]  = "USART1_IRQn",            /*!< USART1 global Interrupt                                           */
  [38]  = "USART2_IRQn",            /*!< USART2 global Interrupt                                           */
  [39]  = "USART3_IRQn",            /*!< USART3 global Interrupt                                           */
  [40]  = "EXTI15_10_IRQn",         /*!< External Line[15:10] Interrupts                                   */
  [41]  = "RTC_Alarm_IRQn",         /*!< RTC Alarm (A and B) through EXTI Line Interrupt                   */
  [42]  = "USBWakeUp_IRQn",         /*!< USB Wakeup Interrupt                                              */
  [43]  = "TIM8_BRK_IRQn",          /*!< TIM8 Break Interrupt                                              */
  [44]  = "TIM8_UP_IRQn",           /*!< TIM8 Update Interrupt                                             */
  [45]  = "TIM8_TRG_COM_IRQn",      /*!< TIM8 Trigger and Commutation Interrupt                            */
  [46]  = "TIM8_CC_IRQn",           /*!< TIM8 Capture Compare Interrupt                                    */
  [47]  = "ADC3_IRQn",              /*!< ADC3 global Interrupt                                             */
  [48]  = "FMC_IRQn",               /*!< FMC global Interrupt                                              */
  [49]  = "LPTIM1_IRQn",            /*!< LP TIM1 Interrupt                                                                  */
  [50]  = "TIM5_IRQn",              /*!< TIM5 global Interrupt                                             */
  [51]  = "SPI3_IRQn",              /*!< SPI3 global Interrupt                                             */
  [52]  = "UART4_IRQn",             /*!< UART4 global Interrupt                                            */
  [53]  = "UART5_IRQn",             /*!< UART5 global Interrupt                                            */
  [54]  = "TIM6_DAC_IRQn",          /*!< TIM6 global and DAC1&2 underrun error  interrupts                 */
  [55]  = "TIM7_IRQn",              /*!< TIM7 global interrupt                                             */
  [56]  = "DMA2_Stream0_IRQn",      /*!< DMA2 Stream 0 global Interrupt                                  */
  [57]  = "DMA2_Stream1_IRQn",      /*!< DMA2 Stream 1 global Interrupt                                  */
  [58]  = "DMA2_Stream2_IRQn",      /*!< DMA2 Stream 2 global Interrupt                                  */
  [59]  = "DMA2_Stream3_IRQn",      /*!< DMA2 Stream 3 global Interrupt                                  */
  [60]  = "DMA2_Stream4_IRQn",      /*!< DMA2 Stream 4 global Interrupt                                  */
  [61]  = "ADC4_IRQn",              /*!< ADC4 global Interrupt                                                              */
  [62]  = "ADC5_IRQn",              /*!< ADC5 global Interrupt                                                              */
  [63]  = "UCPD1_IRQn",             /*!< UCPD global Interrupt                                                              */
  [64]  = "COMP1_2_3_IRQn",         /*!< COMP1, COMP2 and COMP3 Interrupts                                                  */
  [65]  = "COMP4_5_6_IRQn",         /*!< COMP4, COMP5 and COMP6                                                             */
  [66]  = "COMP7_IRQn",             /*!< COMP7 Interrupt                                                                    */
  [67]  = "HRTIM1_Master_IRQn",     /*!< HRTIM Master Timer global Interrupt                                                */
  [68]  = "HRTIM1_TIMA_IRQn",       /*!< HRTIM Timer A global Interrupt                                                     */
  [69]  = "HRTIM1_TIMB_IRQn",       /*!< HRTIM Timer B global Interrupt                                                     */
  [70]  = "HRTIM1_TIMC_IRQn",       /*!< HRTIM Timer C global Interrupt                                                     */
  [71]  = "HRTIM1_TIMD_IRQn",       /*!< HRTIM Timer D global Interrupt                                                     */
  [72]  = "HRTIM1_TIME_IRQn",       /*!< HRTIM Timer E global Interrupt                                                     */
  [73]  = "HRTIM1_FLT_IRQn",        /*!< HRTIM Fault global Interrupt                                                       */
  [74]  = "HRTIM1_TIMF_IRQn",       /*!< HRTIM Timer F global Interrupt                                                     */
  [75]  = "CRS_IRQn",               /*!< CRS global interrupt                                                               */
  [76]  = "SAI1_IRQn",              /*!< Serial Audio Interface global interrupt                                            */
  [77]  = "TIM20_BRK_IRQn",         /*!< TIM20 Break, Transition error and Index error Interrupt                            */
  [78]  = "TIM20_UP_IRQn",          /*!< TIM20 Update interrupt                                                             */
  [79]  = "TIM20_TRG_COM_IRQn",     /*!< TIM20 Trigger, Commutation, Direction change and Index Interrupt                   */
  [80]  = "HASH_RNG_IRQn",          /*!< Hash and Rng global global interrupt                              */
  [81]  = "FPU_IRQn",               /*!< FPU global interrupt                                              */
  [82]  = "I2C4_EV_IRQn",           /*!< I2C4 Event interrupt                                                               */
  [83]  = "I2C4_ER_IRQn",           /*!< I2C4 Error interrupt                                                               */
  [84]  = "SPI4_IRQn",              /*!< SPI4 global Interrupt                                             */
  [85]  = "AES_IRQn",               /*!< AES global interrupt                                                               */
  [86]  = "FDCAN2_IT0_IRQn",        /*!< FDCAN2 interrupt line 0 interrupt                                                  */
  [87]  = "FDCAN2_IT1_IRQn",        /*!< FDCAN2 interrupt line 1 interrupt                                                  */
  [88]  = "FDCAN3_IT0_IRQn",        /*!< FDCAN3 interrupt line 0 interrupt                                                  */
  [89]  = "FDCAN3_IT1_IRQn",        /*!< FDCAN3 interrupt line 1 interrupt                                                  */
  [90]  = "RNG_IRQn",               /*!< RNG global interrupt                                                               */
  [91]  = "LPUART1_IRQn",           /*!< LP UART 1 Interrupt                                                                */
  [92]  = "I2C3_EV_IRQn",           /*!< I2C3 Event Interrupt                                                               */
  [93]  = "I2C3_ER_IRQn",           /*!< I2C3 Error interrupt                                                               */
  [94]  = "DMAMUX_OVR_IRQn",        /*!< DMAMUX overrun global interrupt                                                    */
  [95]  = "QUADSPI_IRQn",           /*!< QUADSPI interrupt                                                                  */
  [96]  = "DMA1_Channel8_IRQn",     /*!< DMA1 Channel 8 interrupt                                                           */
  [97]  = "DMA2_Channel6_IRQn",     /*!< DMA2 Channel 6 interrupt                                                           */
  [98]  = "DMA2_Channel7_IRQn",     /*!< DMA2 Channel 7 interrupt                                                           */
  [99]  = "DMA2_Channel8_IRQn",     /*!< DMA2 Channel 8 interrupt                                                           */
  [100] = "CORDIC_IRQn",            /*!< CORDIC global Interrupt                                                            */
  [101] = "FMAC_IRQn"               /*!< FMAC global Interrupt                                                              */

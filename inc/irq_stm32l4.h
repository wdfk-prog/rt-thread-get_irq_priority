/**
 * @file irq_stm32l4.h
 * @brief 
 * @author HLY (1425075683@qq.com)
 * @version 1.0
 * @date 2022-12-27
 * @copyright Copyright (c) 2022
 * @attention 
 * @par Change log:
 * Date       Version Author  Description
 * 2022-12-27 1.0     HLY     first version
 */
/* Exported constants --------------------------------------------------------*/
  [0]   = "WWDG_IRQn",              /*!< Window WatchDog Interrupt ( wwdg1_it, wwdg2_it)                   */
  [1]   = "PVD_PVM_IRQn",           /*!< PVD/PVM through EXTI Line detection Interrupt                     */
  [2]   = "TAMP_STAMP_IRQn"         /*!< Tamper and TimeStamp interrupts through the EXTI line             */
  [3]   = "RTC_WKUP_IRQn",          /*!< RTC Wakeup interrupt through the EXTI line                        */
  [4]   = "FLASH_IRQn",             /*!< FLASH global Interrupt                                            */
  [5]   = "RCC_IRQn",               /*!< RCC global Interrupt                                              */
  [6]   = "EXTI0_IRQn",             /*!< EXTI Line0 Interrupt                                              */
  [7]   = "EXTI1_IRQn",             /*!< EXTI Line1 Interrupt                                              */
  [8]   = "EXTI2_IRQn",             /*!< EXTI Line2 Interrupt                                              */
  [9]   = "EXTI3_IRQn",             /*!< EXTI Line3 Interrupt                                              */
  [10]  = "EXTI4_IRQn",             /*!< EXTI Line4 Interrupt                                              */
  [11]  = "DMA1_Stream1_IRQn",      /*!< DMA1 Stream 1 global Interrupt                                    */
  [12]  = "DMA1_Stream2_IRQn",      /*!< DMA1 Stream 2 global Interrupt                                    */
  [13]  = "DMA1_Stream3_IRQn",      /*!< DMA1 Stream 3 global Interrupt                                    */
  [14]  = "DMA1_Stream4_IRQn",      /*!< DMA1 Stream 4 global Interrupt                                    */
  [15]  = "DMA1_Stream5_IRQn",      /*!< DMA1 Stream 5 global Interrupt                                    */
  [16]  = "DMA1_Stream6_IRQn",      /*!< DMA1 Stream 6 global Interrupt                                    */
  [17]  = "DMA1_Stream7_IRQn",      /*!< DMA1 Stream 7 global Interrupt                                    */
  [18]  = "ADC1_2_IRQn",            /*!< ADC1, ADC2 SAR global Interrupts                                  */
  [19]  = "CAN1_TX_IRQn",           /*!< CAN1 TX Interrupt                                                 */
  [20]  = "CAN1_RX0_IRQn",          /*!< CAN1 RX0 Interrupt                                                */
  [21]  = "CAN1_RX1_IRQn",          /*!< CAN1 RX1 Interrupt                                                */
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
  [42]  = "DFSDM1_FLT3_IRQn",       /*!< DFSDM1 Filter 3 global Interrupt                                  */
  [43]  = "TIM8_BRK_IRQn",          /*!< TIM8 Break Interrupt                                              */
  [44]  = "TIM8_UP_IRQn",           /*!< TIM8 Update Interrupt                                             */
  [45]  = "TIM8_TRG_COM_IRQn",      /*!< TIM8 Trigger and Commutation Interrupt                            */
  [46]  = "TIM8_CC_IRQn",           /*!< TIM8 Capture Compare Interrupt                                    */
  [47]  = "ADC3_IRQn",              /*!< ADC3 global Interrupt                                             */
  [48]  = "FMC_IRQn",               /*!< FMC global Interrupt                                              */
  [49]  = "SDMMC1_IRQn",            /*!< SDMMC1 global Interrupt                                           */
  [50]  = "TIM5_IRQn",              /*!< TIM5 global Interrupt                                             */
  [51]  = "SPI3_IRQn",              /*!< SPI3 global Interrupt                                             */
  [52]  = "UART4_IRQn",             /*!< UART4 global Interrupt                                            */
  [53]  = "UART5_IRQn",             /*!< UART5 global Interrupt                                            */
  [54]  = "TIM6_DAC_IRQn",          /*!< TIM6 global and DAC1&2 underrun error  interrupts                 */
  [55]  = "TIM7_IRQn",              /*!< TIM7 global interrupt                                             */
  [56]  = "DMA2_Stream1_IRQn",      /*!< DMA2 Stream 1 global Interrupt                                    */
  [57]  = "DMA2_Stream2_IRQn",      /*!< DMA2 Stream 2 global Interrupt                                    */
  [58]  = "DMA2_Stream3_IRQn",      /*!< DMA2 Stream 3 global Interrupt                                    */
  [59]  = "DMA2_Stream4_IRQn",      /*!< DMA2 Stream 4 global Interrupt                                    */
  [60]  = "DMA2_Stream5_IRQn",      /*!< DMA2 Stream 5 global Interrupt                                    */
  [61]  = "DFSDM1_FLT0_IRQn",       /*!< DFSDM1 Filter 0 global Interrupt                                  */
  [62]  = "DFSDM1_FLT1_IRQn",       /*!< DFSDM1 Filter 1 global Interrupt                                  */
  [63]  = "DFSDM1_FLT2_IRQn",       /*!< DFSDM1 Filter 2 global Interrupt                                  */
  [64]  = "COMP_IRQn",              /*!< COMP1 and COMP2 Interrupts                                        */
  [65]  = "LPTIM1_IRQn",            /*!< LP TIM1 interrupt                                                 */
  [66]  = "LPTIM2_IRQn",            /*!< LP TIM2 interrupt                                                 */
  [67]  = "OTG_FS_IRQn",            /*!< USB OTG FS global Interrupt                                       */
  [68]  = "DMA2_Channel6_IRQn",     /*!< DMA2 Channel 6 global interrupt                                   */
  [69]  = "DMA2_Channel7_IRQn",     /*!< DMA2 Channel 7 global interrupt                                   */
  [70]  = "LPUART1_IRQn",           /*!< LP UART1 interrupt                                                */
  [71]  = "QUADSPI_IRQn",           /*!< Quad SPI global interrupt                                         */
  [72]  = "I2C3_EV_IRQn",           /*!< I2C3 event interrupt                                              */
  [73]  = "I2C3_ER_IRQn",           /*!< I2C3 error interrupt                                              */
  [74]  = "SAI1_IRQn",              /*!< Serial Audio Interface 1 global interrupt                         */
  [75]  = "SAI2_IRQn",              /*!< Serial Audio Interface 2 global interrupt                         */
  [76]  = "SWPMI1_IRQn",            /*!< Serial Wire Interface 1 global interrupt                          */
  [77]  = "TSC_IRQn",               /*!< Touch Sensing Controller Interrupts                               */
  [78]  = "LCD_IRQn",               /*!< LCD Interrupt                                                     */
  [79]  = "AES_IRQn",               /*!< AES global interrupt                                              */
  [80]  = "HASH_RNG_IRQn",          /*!< Hash and Rng global global interrupt                              */
  [81]  = "FPU_IRQn",               /*!< FPU global interrupt                                              */
  [82]  = "CRS_IRQn",               /*!< Clock Recovery Global Interrupt                                   */
  [83]  = "I2C4_EV_IRQn",           /*!< I2C4 Event interrupt                                              */
  [84]  = "I2C4_ER_IRQn",           /*!< I2C4 Error interrupt                                              */
  [85]  = "DCMI_IRQn",              /*!< DCMI global interrupt                                             */
  [86]  = "CAN2_TX_IRQn ",          /*!< CAN2 TX Interrupt                                                 */
  [87]  = "CAN2_RX0_IRQn",          /*!< CAN2 RX0 Interrupt                                                */
  [88]  = "CAN2_RX1_IRQn",          /*!< CAN2 RX1 Interrupt                                                */
  [89]  = "CAN2_SCE_IRQn",          /*!< CAN2 SCE Interrupt                                                */
  [90]  = "DMA2D_IRQn",             /*!< DMA2D global interrupt                                            */
  [91]  = "LTDC_IRQn",              /*!< LTDC global Interrupt                                             */
  [92]  = "LTDC_ER_IRQn",           /*!< LTDC Error global Interrupt                                       */
  [93]  = "GFXMMU_IRQn",            /*!< GFXMMU global error interrupt                                     */
  [94]  = "DMAMUX_OVR_IRQn",        /*!< DMAMUX overrun global interrupt                                   */

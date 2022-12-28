/**
 * @file irq_stm32f7.h
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
#if defined (STM32H7A3xx) ||defined (STM32H7A3xxQ) || defined (STM32H7B3xx) || defined (STM32H7B3xxQ) || defined (STM32H7B0xx)  || defined (STM32H7B0xxQ)
  [1]   = "PVD_PVM_IRQn",           /*!< PVD/PVM through EXTI Line detection Interrupt                     */
  [2]   = "RTC_TAMP_STAMP_CSS_LSE_IRQn"/*!< Tamper, TimeStamp, CSS and LSE interrupts through the EXTI line*/
#else
  [1]   = "PVD_AVD_IRQn",           /*!< PVD/AVD through EXTI Line detection Interrupt                     */
  [2]   = "TAMP_STAMP_IRQn",        /*!< Tamper and TimeStamp interrupts through the EXTI line             */
#endif /* defined (STM32H7A3xx) ||defined (STM32H7A3xxQ) || defined (STM32H7B3xx) || defined (STM32H7B3xxQ) || defined (STM32H7B0xx)  || defined (STM32H7B0xxQ) */
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
  [19]  = "CAN1_TX_IRQn",           /*!< CAN1 TX Interrupt                                                 */
  [20]  = "CAN1_RX0_IRQn",          /*!< CAN1 RX0 Interrupt                                                */
  [21]  = "CAN1_RX1_IRQn",          /*!< CAN1 RX1 Interrupt                                                */
  [22]  = "CAN1_SCE_IRQn",          /*!< CAN1 SCE Interrupt                                                */
  [23]  = "EXTI9_5_IRQn",           /*!< External Line[9:5] Interrupts                                     */
  [24]  = "TIM1_BRK_TIM9_IRQn",     /*!< TIM1 Break interrupt and TIM9 global interrupt                    */
  [25]  = "TIM1_UP_TIM10_IRQn",     /*!< TIM1 Update Interrupt and TIM10 global interrupt                  */
  [26]  = "TIM1_TRG_COM_TIM11_IRQn",/*!< TIM1 Trigger and Commutation Interrupt and TIM11 global interrupt */
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
  [42]  = "OTG_FS_WKUP_IRQn",       /*!< USB OTG FS Wakeup through EXTI line interrupt                     */
  [43]  = "TIM8_BRK_TIM12_IRQn",    /*!< TIM8 Break Interrupt and TIM12 global interrupt                   */
  [44]  = "TIM8_UP_TIM13_IRQn",     /*!< TIM8 Update Interrupt and TIM13 global interrupt                  */
  [45]  = "TIM8_TRG_COM_TIM14_IRQn",/*!< TIM8 Trigger and Commutation Interrupt and TIM14 global interrupt */
  [46]  = "TIM8_CC_IRQn",           /*!< TIM8 Capture Compare Interrupt                                    */
  [47]  = "DMA1_Stream7_IRQn",      /*!< DMA1 Stream7 Interrupt                                            */
  [48]  = "FMC_IRQn",               /*!< FMC global Interrupt                                              */
  [49]  = "SDMMC1_IRQn",            /*!< SDMMC1 global Interrupt                                           */
  [50]  = "TIM5_IRQn",              /*!< TIM5 global Interrupt                                             */
  [51]  = "SPI3_IRQn",              /*!< SPI3 global Interrupt                                             */
  [52]  = "UART4_IRQn",             /*!< UART4 global Interrupt                                            */
  [53]  = "UART5_IRQn",             /*!< UART5 global Interrupt                                            */
  [54]  = "TIM6_DAC_IRQn",          /*!< TIM6 global and DAC1&2 underrun error  interrupts                 */
  [55]  = "TIM7_IRQn",              /*!< TIM7 global interrupt                                             */
  [56]  = "DMA2_Stream0_IRQn",      /*!< DMA2 Stream 0 global Interrupt                                    */
  [57]  = "DMA2_Stream1_IRQn",      /*!< DMA2 Stream 1 global Interrupt                                    */
  [58]  = "DMA2_Stream2_IRQn",      /*!< DMA2 Stream 2 global Interrupt                                    */
  [59]  = "DMA2_Stream3_IRQn",      /*!< DMA2 Stream 3 global Interrupt                                    */
  [60]  = "DMA2_Stream4_IRQn",      /*!< DMA2 Stream 4 global Interrupt                                    */
  [61]  = "ETH_IRQn",               /*!< Ethernet global Interrupt                                         */
  [62]  = "ETH_WKUP_IRQn",          /*!< Ethernet Wakeup through EXTI line Interrupt                       */
  [63]  = "CAN2_TX_IRQn ",          /*!< CAN2 TX Interrupt                                                 */
  [64]  = "CAN2_RX0_IRQn",          /*!< CAN2 RX0 Interrupt                                                */
  [65]  = "CAN2_RX1_IRQn",          /*!< CAN2 RX1 Interrupt                                                */
  [66]  = "CAN2_SCE_IRQn",          /*!< CAN2 SCE Interrupt                                                */
  [67]  = "OTG_FS_IRQn",            /*!< USB OTG FS global Interrupt                                       */
  [68]  = "DMA2_Stream5_IRQn",      /*!< DMA2 Stream 5 global interrupt                                    */
  [69]  = "DMA2_Stream6_IRQn",      /*!< DMA2 Stream 6 global interrupt                                    */
  [70]  = "DMA2_Stream7_IRQn",      /*!< DMA2 Stream 7 global interrupt                                    */
  [71]  = "USART6_IRQn",            /*!< USART6 global interrupt                                           */
  [72]  = "I2C3_EV_IRQn",           /*!< I2C3 event interrupt                                              */
  [73]  = "I2C3_ER_IRQn",           /*!< I2C3 error interrupt                                              */
  [74]  = "OTG_HS_EP1_OUT_IRQn",    /*!< USB OTG HS End Point 1 Out global interrupt                       */
  [75]  = "OTG_HS_EP1_IN_IRQn",     /*!< USB OTG HS End Point 1 In global interrupt                        */
  [76]  = "OTG_HS_WKUP_IRQn",       /*!< USB OTG HS Wakeup through EXTI interrupt                          */
  [77]  = "OTG_HS_IRQn",            /*!< USB OTG HS global interrupt                                       */
  [78]  = "DCMI_IRQn",              /*!< DCMI_IRQn global interrupt                                        */
#if defined (STM32F732xx) || defined (STM32F733xx) || defined (STM32F730xx)
  [79]  = "AES_IRQn",               /*!< AES global interrupt                                              */
#else
  [79]  = "CRYP_IRQn",              /*!< CRYP crypto global interrupt                                      */
#endif
  [80]  = "RNG_IRQn",               /*!< RNG global interrupt                                              */
  [81]  = "FPU_IRQn",               /*!< FPU global interrupt                                              */
  [82]  = "UART7_IRQn",             /*!< UART7 global interrupt                                            */
  [83]  = "UART8_IRQn",             /*!< UART8 global interrupt                                            */
  [84]  = "SPI4_IRQn",              /*!< SPI4 global Interrupt                                             */
  [85]  = "SPI5_IRQn",              /*!< SPI5 global Interrupt                                             */
  [86]  = "SPI6_IRQn",              /*!< SPI6 global Interrupt                                             */
  [87]  = "SAI1_IRQn",              /*!< SAI1 global Interrupt                                             */
  [88]  = "LTDC_IRQn",              /*!< LTDC global Interrupt                                             */
  [89]  = "LTDC_ER_IRQn",           /*!< LTDC Error global Interrupt                                       */
  [90]  = "DMA2D_IRQn",             /*!< DMA2D global Interrupt                                            */
  [91]  = "SAI2_IRQn",              /*!< SAI2 global Interrupt                                             */
  [92]  = "QUADSPI_IRQn",           /*!< Quad SPI global interrupt                                         */
  [93]  = "LPTIM1_IRQn",            /*!< LP TIM1 interrupt                                                 */
  [94]  = "CEC_IRQn",               /*!< HDMI-CEC global Interrupt                                         */
  [95]  = "I2C4_EV_IRQn",           /*!< I2C4 Event Interrupt                                              */
  [96]  = "I2C4_ER_IRQn",           /*!< I2C4 Error Interrupt                                              */
  [97]  = "SPDIF_RX_IRQn",          /*!< SPDIF-RX global Interrupt                                         */
  [98]  = "DSI_IRQn",               /*!< DSI global Interrupt                                              */
  [99]  = "DFSDM1_FLT0_IRQn",       /*!< DFSDM1 Filter 0 global Interrupt                                  */
  [100] = "DFSDM1_FLT1_IRQn",       /*!< DFSDM1 Filter 1 global Interrupt                                  */
  [101] = "DFSDM1_FLT2_IRQn",       /*!< DFSDM1 Filter 2 global Interrupt                                  */
  [102] = "DFSDM1_FLT3_IRQn",       /*!< DFSDM1 Filter 3 global Interrupt                                  */
  [103] = "SDMMC2_IRQn",            /*!< SDMMC2 global Interrupt                                           */
  [104] = "CAN3_TX_IRQn",           /*!< CAN3 TX Interrupt                                                 */
  [105] = "CAN3_RX0_IRQn",          /*!< CAN3 RX0 Interrupt                                                */
  [106] = "CAN3_RX1_IRQn",          /*!< CAN3 RX1 Interrupt                                                */
  [107] = "CAN3_SCE_IRQn",          /*!< CAN3 SCE Interrupt                                                */
  [108] = "JPEG_IRQn",              /*!< JPEG global Interrupt                                             */
  [109] = "MDIOS_IRQn",             /*!< MDIO Slave global Interrupt                                       */

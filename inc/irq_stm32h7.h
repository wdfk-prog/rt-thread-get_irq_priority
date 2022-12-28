/**
 * @file irq_stm32h7.h
 * @brief 
 * @author HLY (1425075683@qq.com)
 * @version 1.0
 * @date 2022-12-27
 * @copyright Copyright (c) 2022
 * @attention 
 * @par 修改日志:
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
  [19]  = "FDCAN1_IT0_IRQn",        /*!< FDCAN1 Interrupt line 0                                           */
  [20]  = "FDCAN2_IT0_IRQn",        /*!< FDCAN2 Interrupt line 0                                           */
  [21]  = "FDCAN1_IT1_IRQn",        /*!< FDCAN1 Interrupt line 1                                           */
  [22]  = "FDCAN2_IT1_IRQn",        /*!< FDCAN2 Interrupt line 1                                           */
  [23]  = "EXTI9_5_IRQn",           /*!< External Line[9:5] Interrupts                                     */
  [24]  = "TIM1_BRK_IRQn",          /*!< TIM1 Break Interrupt                                              */
  [25]  = "TIM1_UP_IRQn",           /*!< TIM1 Update Interrupt                                             */
  [26]  = "TIM1_TRG_COM_IRQn",      /*!< TIM1 Trigger and Commutation Interrupt                            */
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
  [42]  = "DFSDM2_IRQn",            /*!< DFSDM2 global Interrupt                                           */
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
  [63]  = "FDCAN_CAL_IRQn",         /*!< FDCAN Calibration unit Interrupt                                  */
  [64]  = "CM7_SEV_IRQn",           /*!< CM7 Send event interrupt for CM4                                  */
  [65]  = "CM4_SEV_IRQn",           /*!< CM4 Send event interrupt for CM7                                  */
  [66]  = "DFSDM1_FLT6_IRQn",       /*!< DFSDM Filter6 Interrupt                                           */
  [67]  = "DFSDM1_FLT7_IRQn",       /*!< DFSDM Filter7 Interrupt                                           */
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
#if defined (STM32H735xx) || defined (STM32H733xx) || defined (STM32H730xx) || defined (STM32H730xxQ) || defined (STM32H725xx) || defined (STM32H723xx)
  [78]  = "DCMI_PSSI_IRQn",         /*!< DCMI and PSSI global interrupt                                    */
#else
  [78] = "DCMI_IRQn",               /*!< DCMI_IRQn global interrupt                                        */
#endif /* defined (STM32H7A3xx) ||defined (STM32H7A3xxQ) || defined (STM32H7B3xx) || defined (STM32H7B3xxQ) || defined (STM32H7B0xx)  || defined (STM32H7B0xxQ) */
  [79]  = "CRYP_IRQn",              /*!< CRYP crypto global interrupt                                      */
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
#if defined (STM32H7A3xx) ||defined (STM32H7A3xxQ) || defined (STM32H7B3xx) || defined (STM32H7B3xxQ) || defined (STM32H7B0xx)  || defined (STM32H7B0xxQ)
  [92]  = "OCTOSPI1_IRQn",          /*!< OCTOSPI1 global interrupt                                         */
#else
  [92]  = "QUADSPI_IRQn",           /*!< Quad SPI global interrupt                                         */
#endif /* defined (STM32H7A3xx) ||defined (STM32H7A3xxQ) || defined (STM32H7B3xx) || defined (STM32H7B3xxQ) || defined (STM32H7B0xx)  || defined (STM32H7B0xxQ) */
  [93]  = "LPTIM1_IRQn",            /*!< LP TIM1 interrupt                                                 */
  [94]  = "CEC_IRQn",               /*!< HDMI-CEC global Interrupt                                         */
  [95]  = "I2C4_EV_IRQn",           /*!< I2C4 Event Interrupt                                              */
  [96]  = "I2C4_ER_IRQn",           /*!< I2C4 Error Interrupt                                              */
  [97]  = "SPDIF_RX_IRQn",          /*!< SPDIF-RX global Interrupt                                         */
  [98]  = "OTG_FS_EP1_OUT_IRQn",    /*!< USB OTG HS2 global interrupt                                      */
  [99]  = "OTG_FS_EP1_IN_IRQn",     /*!< USB OTG HS2 End Point 1 Out global interrupt                      */
  [100] = "OTG_FS_WKUP_IRQn",       /*!< USB OTG HS2 End Point 1 In global interrupt                       */
  [101] = "OTG_FS_IRQn",            /*!< USB OTG HS2 Wakeup through EXTI interrupt                         */
  [102] = "DMAMUX1_OVR_IRQn",       /*!<DMAMUX1 Overrun interrupt                                          */
  [103] = "HRTIM1_Master_IRQn",     /*!< HRTIM Master Timer global Interrupts                              */
  [104] = "HRTIM1_TIMA_IRQn",       /*!< HRTIM Timer A global Interrupt                                    */
  [105] = "HRTIM1_TIMB_IRQn",       /*!< HRTIM Timer B global Interrupt                                    */
  [106] = "HRTIM1_TIMC_IRQn",       /*!< HRTIM Timer C global Interrupt                                    */
  [107] = "HRTIM1_TIMD_IRQn",       /*!< HRTIM Timer D global Interrupt                                    */
  [108] = "HRTIM1_TIME_IRQn",       /*!< HRTIM Timer E global Interrupt                                    */
  [109] = "HRTIM1_FLT_IRQn",        /*!< HRTIM Fault global Interrupt                                      */
  [110] = "DFSDM1_FLT0_IRQn",       /*!< DFSDM Filter1 Interrupt                                           */
  [111] = "DFSDM1_FLT1_IRQn",       /*!< DFSDM Filter2 Interrupt                                           */
  [112] = "DFSDM1_FLT2_IRQn",       /*!< DFSDM Filter3 Interrupt                                           */
  [113] = "DFSDM1_FLT3_IRQn",       /*!< DFSDM Filter4 Interrupt                                           */
  [114] = "SAI3_IRQn",              /*!< SAI3 global Interrupt                                             */
  [115] = "SWPMI1_IRQn",            /*!< Serial Wire Interface 1 global interrupt                          */
  [116] = "TIM15_IRQn",             /*!< TIM15 global Interrupt                                            */
  [117] = "TIM16_IRQn",             /*!< TIM16 global Interrupt                                            */
  [118] = "TIM17_IRQn",             /*!< TIM17 global Interrupt                                            */
  [119] = "MDIOS_WKUP_IRQn",        /*!< MDIOS Wakeup  Interrupt                                           */
  [120] = "MDIOS_IRQn",             /*!< MDIOS global Interrupt                                            */
  [121] = "JPEG_IRQn",              /*!< JPEG global Interrupt                                             */
  [122] = "MDMA_IRQn",              /*!< MDMA global Interrupt                                             */
  [123] = "DSI_IRQn",               /*!< DSI global Interrupt                                              */
  [124] = "SDMMC2_IRQn",            /*!< SDMMC2 global Interrupt                                           */
  [125] = "HSEM1_IRQn",             /*!< HSEM1 global Interrupt                                            */
  [126] = "HSEM2_IRQn",             /*!< HSEM2 global Interrupt                                            */
#if defined (STM32H7A3xx) ||defined (STM32H7A3xxQ) || defined (STM32H7B3xx) || defined (STM32H7B3xxQ) || defined (STM32H7B0xx)  || defined (STM32H7B0xxQ)
  [127] = "DAC2_IRQn",              /*!< DAC2 global Interrupt                                             */
 #else
  [127] = "ADC3_IRQn",              /*!< ADC3 global Interrupt                                             */
#endif /* defined (STM32H7A3xx) ||defined (STM32H7A3xxQ) || defined (STM32H7B3xx) || defined (STM32H7B3xxQ) || defined (STM32H7B0xx)  || defined (STM32H7B0xxQ) */
  [128] = "DMAMUX2_OVR_IRQn",       /*!<DMAMUX2 Overrun interrupt                                          */
#if defined (STM32H743xx) || defined (STM32H753xx)  || defined (STM32H750xx) || defined (STM32H742xx) || \
    defined (STM32H735xx) || defined (STM32H733xx) || defined (STM32H730xx) || defined (STM32H730xxQ) || defined (STM32H725xx) || defined (STM32H723xx)
  [129] = "BDMA_Channel0_IRQn",     /*!< BDMA Channel 0 global Interrupt                                   */
  [130] = "BDMA_Channel1_IRQn",     /*!< BDMA Channel 1 global Interrupt                                   */
  [131] = "BDMA_Channel2_IRQn",     /*!< BDMA Channel 2 global Interrupt                                   */
  [132] = "BDMA_Channel3_IRQn",     /*!< BDMA Channel 3 global Interrupt                                   */
  [133] = "BDMA_Channel4_IRQn",     /*!< BDMA Channel 4 global Interrupt                                   */
  [134] = "BDMA_Channel5_IRQn",     /*!< BDMA Channel 5 global Interrupt                                   */
  [135] = "BDMA_Channel6_IRQn",     /*!< BDMA Channel 6 global Interrupt                                   */
  [136] = "BDMA_Channel7_IRQn",     /*!< BDMA Channel 7 global Interrupt                                   */
#else
  [129] = "BDMA2_Channel0_IRQn",    /*!< BDMA2 Channel 0 global Interrupt                                  */
  [130] = "BDMA2_Channel1_IRQn",    /*!< BDMA2 Channel 1 global Interrupt                                  */
  [131] = "BDMA2_Channel2_IRQn",    /*!< BDMA2 Channel 2 global Interrupt                                  */
  [132] = "BDMA2_Channel3_IRQn",    /*!< BDMA2 Channel 3 global Interrupt                                  */
  [133] = "BDMA2_Channel4_IRQn",    /*!< BDMA2 Channel 4 global Interrupt                                  */
  [134] = "BDMA2_Channel5_IRQn",    /*!< BDMA2 Channel 5 global Interrupt                                  */
  [135] = "BDMA2_Channel6_IRQn",    /*!< BDMA2 Channel 6 global Interrupt                                  */
  [136] = "BDMA2_Channel7_IRQn",    /*!< BDMA2 Channel 7 global Interrupt                                  */
#endif /* defined (STM32H743xx) || defined (STM32H753xx)  || defined (STM32H750xx) || defined (STM32H742xx) || \
          defined (STM32H735xx) || defined (STM32H733xx) || defined (STM32H730xx) || defined (STM32H730xxQ) || defined (STM32H725xx) || defined (STM32H723xx) */
  [137] = "COMP_IRQn" ,             /*!< COMP global Interrupt                                             */
  [138] = "LPTIM2_IRQn",            /*!< LP TIM2 global interrupt                                          */
  [139] = "LPTIM3_IRQn",            /*!< LP TIM3 global interrupt                                          */
#if defined (STM32H735xx) || defined (STM32H733xx) || defined (STM32H730xx) || defined (STM32H730xxQ) || defined (STM32H725xx) || defined (STM32H723xx)
  [140] = "LPTIM4_IRQn",            /*!< LP TIM4 global interrupt                                          */
  [141] = "LPTIM5_IRQn",            /*!< LP TIM5 global interrupt                                          */
#elif defined (STM32H7A3xx) ||defined (STM32H7A3xxQ) || defined (STM32H7B3xx) || defined (STM32H7B3xxQ) || defined (STM32H7B0xx)  || defined (STM32H7B0xxQ)
  [140] = "UART9_IRQn",             /*!< UART9 global interrupt                                            */
  [141] = "USART10_IRQn"            /*!< USART10 global interrupt                                          */
#endif /* defined (STM32H735xx) || defined (STM32H733xx) || defined (STM32H730xx) || defined (STM32H730xxQ) || defined (STM32H725xx) || defined (STM32H723xx) */
  [142] = "LPUART1_IRQn",           /*!< LP UART1 interrupt                                                */
  [143] = "WWDG_RST_IRQn",          /*!< Window Watchdog reset interrupt (exti_d2_wwdg_it, exti_d1_wwdg_it)*/
  [144] = "CRS_IRQn",               /*!< Clock Recovery Global Interrupt                                   */
  [145] = "ECC_IRQn",               /*!< ECC diagnostic Global Interrupt                                   */
  [146] = "SAI4_IRQn",              /*!< SAI4 global interrupt                                             */
  [147] = "DTS_IRQn",               /*!< Digital Temperature Sensor Global Interrupt                       */
  [148] = "HOLD_CORE_IRQn",         /*!< Hold core interrupt                                               */
  [149] = "WAKEUP_PIN_IRQn",        /*!< Interrupt for all 6 wake-up pins                                  */
  [150] = "OCTOSPI2_IRQn",          /*!< OctoSPI2 global interrupt                                         */
  [151] = "OTFDEC1_IRQn",           /*!< OTFDEC1 global interrupt                                          */
  [152] = "OTFDEC2_IRQn",           /*!< OTFDEC2 global interrupt                                          */
#if defined (STM32H735xx) || defined (STM32H733xx) || defined (STM32H730xx) || defined (STM32H730xxQ) || defined (STM32H725xx) || defined (STM32H723xx)
  [153] = "FMAC_IRQn",              /*!< FMAC global interrupt                                             */
  [154] = "CORDIC_IRQn",            /*!< CORDIC global interrupt                                           */
#elif defined (STM32H7A3xx) ||defined (STM32H7A3xxQ) || defined (STM32H7B3xx) || defined (STM32H7B3xxQ) || defined (STM32H7B0xx)  || defined (STM32H7B0xxQ)
  [153] = "GFXMMU_IRQn",            /*!< GFXMMU global interrupt                                           */
  [154] = "BDMA1_IRQn",             /*!< BDMA1 for DFSM global interrupt                                   */
#endif /* defined (STM32H735xx) || defined (STM32H733xx) || defined (STM32H730xx) || defined (STM32H730xxQ) || defined (STM32H725xx) || defined (STM32H723xx) */
  [155] = "UART9_IRQn",             /*!< UART9 global Interrupt                                            */
  [156] = "USART10_IRQn",           /*!< USART10 global interrupt                                          */
  [157] = "I2C5_EV_IRQn",           /*!< I2C5 event interrupt                                              */
  [158] = "I2C5_ER_IRQn",           /*!< I2C5 error interrupt                                              */
  [159] = "FDCAN3_IT0_IRQn",        /*!< FDCAN3 Interrupt line 0                                           */
  [160] = "FDCAN3_IT1_IRQn",        /*!< FDCAN3 Interrupt line 1                                           */
  [161] = "TIM23_IRQn",             /*!< TIM23 global interrupt                                            */
  [162] = "TIM24_IRQn",             /*!< TIM24 global interrupt                                            */

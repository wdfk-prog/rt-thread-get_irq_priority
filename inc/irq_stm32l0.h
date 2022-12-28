/**
 * @file irq_stm32l0.h
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
  [11]  = "DMA1_Channel4_5_6_7_IRQn", /*!< DMA1 Channel 4, Channel 5, Channel 6 and Channel 7 Interrupts */
  [12]  = "ADC1_COMP_IRQn",           /*!< ADC1, COMP1 and COMP2 Interrupts                        */
  [13]  = "LPTIM1_IRQn",              /*!< LPTIM1 Interrupt                                        */
  [14]  = "USART4_5_IRQn",            /*!< USART4 and USART5 Interrupt                             */
  [15]  = "TIM2_IRQn",                /*!< TIM2 global Interrupt                                           */
  [17]  = "TIM6_DAC_IRQn",            /*!< TIM6 and DAC Interrupts                                 */
  [18]  = "TIM7_IRQn",                /*!< TIM7 Interrupt                                          */
  [18]  = "TIM7_IRQn",                /*!< TIM7 global Interrupt                                           */
  [19]  = "TIM14_IRQn",               /*!< TIM14 global Interrupt                                          */
  [20]  = "TIM21_IRQn",               /*!< TIM21 Interrupt                                         */
  [21]  = "I2C3_IRQn",                /*!< I2C3 Interrupt                                          */
  [22]  = "TIM22_IRQn",               /*!< TIM22 Interrupt                                         */
  [23]  = "I2C1_IRQn",                /*!< I2C1 Event Interrupt                                            */
  [24]  = "I2C2_IRQn",                /*!< I2C2 Interrupt                                                  */
  [25]  = "SPI1_IRQn",                /*!< SPI1 global Interrupt                                           */
  [26]  = "SPI2_IRQn"                 /*!< SPI2 Interrupt                                                  */
  [27]  = "USART1_IRQn",              /*!< USART1 global Interrupt & EXTI Line25 Interrupt (USART1 wakeup) */
  [28]  = "USART2_LPUART2_IRQn",      /*!< USART2 + LPUART2 Interrupt                                      */
  [29]  = "AES_RNG_LPUART1_IRQn",     /*!< AES and RNG and LPUART1 Interrupts                              */
  [30]  = "LCD_IRQn",                 /*!< LCD Interrupt                                                   */
  [31]  = "USB_IRQn",                 /*!< USB global Interrupt                                            */

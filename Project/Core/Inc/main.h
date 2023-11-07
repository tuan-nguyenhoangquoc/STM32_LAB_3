/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Led_a_Pin GPIO_PIN_1
#define Led_a_GPIO_Port GPIOA
#define Led_b_Pin GPIO_PIN_2
#define Led_b_GPIO_Port GPIOA
#define Led_c_Pin GPIO_PIN_3
#define Led_c_GPIO_Port GPIOA
#define Led_d_Pin GPIO_PIN_4
#define Led_d_GPIO_Port GPIOA
#define Led_e_Pin GPIO_PIN_5
#define Led_e_GPIO_Port GPIOA
#define Led_f_Pin GPIO_PIN_6
#define Led_f_GPIO_Port GPIOA
#define Led_g_Pin GPIO_PIN_7
#define Led_g_GPIO_Port GPIOA
#define Button1_Pin GPIO_PIN_0
#define Button1_GPIO_Port GPIOB
#define Button2_Pin GPIO_PIN_1
#define Button2_GPIO_Port GPIOB
#define Button3_Pin GPIO_PIN_2
#define Button3_GPIO_Port GPIOB
#define LED_RED_1_Pin GPIO_PIN_10
#define LED_RED_1_GPIO_Port GPIOB
#define LED_YELLOW_1_Pin GPIO_PIN_11
#define LED_YELLOW_1_GPIO_Port GPIOB
#define LED_GREEN_1_Pin GPIO_PIN_12
#define LED_GREEN_1_GPIO_Port GPIOB
#define LED_RED_2_Pin GPIO_PIN_13
#define LED_RED_2_GPIO_Port GPIOB
#define LED_YELLOW_2_Pin GPIO_PIN_14
#define LED_YELLOW_2_GPIO_Port GPIOB
#define LED_GREEN_2_Pin GPIO_PIN_15
#define LED_GREEN_2_GPIO_Port GPIOB
#define Led_a2_Pin GPIO_PIN_9
#define Led_a2_GPIO_Port GPIOA
#define Led_b2_Pin GPIO_PIN_10
#define Led_b2_GPIO_Port GPIOA
#define Led_c2_Pin GPIO_PIN_11
#define Led_c2_GPIO_Port GPIOA
#define Led_d2_Pin GPIO_PIN_12
#define Led_d2_GPIO_Port GPIOA
#define Led_e2_Pin GPIO_PIN_13
#define Led_e2_GPIO_Port GPIOA
#define Led_f2_Pin GPIO_PIN_14
#define Led_f2_GPIO_Port GPIOA
#define Led_g2_Pin GPIO_PIN_15
#define Led_g2_GPIO_Port GPIOA
#define EN0_Pin GPIO_PIN_3
#define EN0_GPIO_Port GPIOB
#define EN1_Pin GPIO_PIN_4
#define EN1_GPIO_Port GPIOB
#define EN2_Pin GPIO_PIN_5
#define EN2_GPIO_Port GPIOB
#define EN3_Pin GPIO_PIN_6
#define EN3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

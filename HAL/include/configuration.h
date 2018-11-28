/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef CONFIGURATION_H
#define CONFIGURATION_H

/* Includes ------------------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);
void SystemClock_Config(void);
void MX_GPIO_Init(void);
void MX_SAI1_Init(void);
void MX_I2C1_Init(void);
void MX_DFSDM1_Init(void);
void MX_SDMMC2_MMC_Init(void);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* CONFIGURATION_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

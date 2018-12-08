#include <stdio.h>
#include "stm32f7xx_hal.h"
#include "stm32f7xx.h"
#include "stm32f7xx_it.h"
#include "interface.h"
#include "stm32f7xx_hal_uart.h"

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Functions -----------------------------------------------------------------*/

void init_hardware(void)
{
	/* Reset of all peripherals, Initializes the Flash interface and the Systick. */
	HAL_Init();
	/* Configure the system clock */
	SystemClock_Config();
	/* Initialize all configured peripherals */
	MX_GPIO_Init();
	MX_SAI1_Init();
	MX_I2C1_Init();
	MX_DFSDM1_Init();
	//  MX_SDMMC2_MMC_Init();
	MX_USART6_UART_Init(); //Init UART also init's GPIO6/7

	HAL_GPIO_TogglePin(GPIOJ, GPIO_PIN_13);
	volatile uint32_t nopVar;
	MX_USB_DEVICE_Init();
	for( uint32_t i = 0; i < 0x01000000; i++ )
	{
		nopVar++;
	}
	
}

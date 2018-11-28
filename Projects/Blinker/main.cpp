#include <stdio.h>
#include "interface.h"

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Functions -----------------------------------------------------------------*/

/**
* @brief  The application entry point.
*
* @retval None
*/
int main(void)
{
	init_hardware();
	
	volatile uint32_t nopVar;
	
	/* Infinite loop */
	while (1)
	{
		HAL_GPIO_TogglePin(GPIOJ, GPIO_PIN_13);
		//CDC_Transmit_HS((uint8_t*)"hello world!", 8);
		for( uint32_t i = 0; i < 0x200000; i++ )
		{
			nopVar++;
		}
	}

}

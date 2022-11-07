/*
 * test.c
 *
 * Created: 10/27/2022 9:56:47 PM
 *  Author: Mamdouh
 */ 


#include "led.h"
int mainy(void)
{
	LED_init(LED_C_RED_PORT, LED_C_RED_PIN);
	LED_init(LED_C_YELLOW_PORT, LED_C_YELLOW_PIN);
	LED_init(LED_C_GREEN_PORT, LED_C_GREEN_PIN);
	while(1)
	{
		LED_on(LED_C_RED_PORT, LED_C_RED_PIN);
		LED_off(LED_C_YELLOW_PORT, LED_C_YELLOW_PIN);
		LED_toggle(LED_C_GREEN_PORT, LED_C_GREEN_PIN);	
			
	}
}

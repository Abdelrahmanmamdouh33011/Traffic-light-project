/*
 * Button.c
 *
 * Created: 10/27/2022 9:55:45 PM
 *  Author: Mamdouh
 */ 

#include "button.h"

//initialize
void Button_init(EN_port_t buttonPort, EN_pin_t buttonPin) // Button is an input device
{
	DIO_init(buttonPort, buttonPin, IN);
}

// get button status
void Button_get_state(EN_port_t buttonPort, EN_pin_t buttonPin, uint8_t *value)
{
	DIO_read(buttonPort, buttonPin, value);
}
/*
 * Button.h
 *
 * Created: 10/27/2022 9:55:58 PM
 *  Author: Mamdouh
 */ 




#ifndef BUTTON_H_
#define BUTTON_H_

/************************************************************************/
/* Button driver in upper layer, so we include DIO driver(from low layer) inside it */
/************************************************************************/
#include "../../MCAL/DIO/dio.h"

// define button1 port and pin
#define EXT_INT_BUTTON_PORT PORT_D
#define EXT_INT_BUTTON_PIN PIN2

//functions prototypes

//initialization
void Button_init(EN_port_t buttonPort, EN_pin_t buttonPin);

// get button status
void Button_get_state(EN_port_t buttonPort, EN_pin_t buttonPin, uint8_t *value);




#endif /* BUTTON_H_ */_ 
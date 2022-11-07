/*
 * timer.h
 *
 * Created: 10/27/2022 9:59:11 PM
 *  Author: Mamdouh
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "../../Utilities/registers.h"
#include "../../Utilities/types.h"


void TIMER_init(void);
void TIMER_start(uint16_t preScalar, uint32_t number_of_overflow);
void TIMER_stop(void);
void delay_5s(void);
#endif /* TIMER_H_ */
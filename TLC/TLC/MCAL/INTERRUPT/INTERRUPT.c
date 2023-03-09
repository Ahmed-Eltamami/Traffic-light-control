/*
 * INTERRUPT.c
 *
 * Created: 2/12/2023 1:33:29 AM
 *  Author: Ahmed
 */ 

#include "INTERRUPT.h"

int interrupt_int(void)
{
	sei();
	MCUCR |=(1<<0)|(1<<1);
	GICR |=(1<<6);
	return OK;
}
/*
 * TIMER.c
 *
 * Created: 2/10/2023 5:51:42 PM
 *  Author: Ahmed
 */ 



#include "TIMER.h"


int TIMER_init(void)
{
	TCCR0 =0x00; //normal mode
	TCNT0 =0x00; //set timer int value 0
	return OK;
	
}
int TIMER_delay(uint8_t breakDelay)
{
	uint8_t i =0;
	TCNT0|=(1<<2)|(1<<3);
	TCCR0|=(1<<2)|(1<<0);
	//TCCR0|=(1<<2);
	while(i<20)//20
	{
		if (breakDelay == 4) {break;}
		while((TIFR&(1<<0))==0);
		TIFR|=(1<<0);
		i++;
		
	}
	return OK;
}

int TIMER_set(void)
{
	TCNT0|=(1<<2)|(1<<3);
	TCCR0|=(1<<2)|(1<<0);
	return OK;
}

int FLAG_set(void)
{
	TIFR|=(1<<0);
	return OK;
}

int ReadFlag(void)
{
return (TIFR&(1<<0));
}


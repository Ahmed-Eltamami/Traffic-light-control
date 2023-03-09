/*
 * APP.c
 *
 * Created: 2/10/2023 5:53:32 PM
 *  Author: Ahmed
 */ 

#include "APP.h"

uint8_t state = 1 ;
void APP_int()
{
	BUTTOM_init(PORT_D,2);
	LED_int(PORT_A,0);
	LED_int(PORT_A,1);
	LED_int(PORT_A,2);
	LED_int(PORT_B,0);
	LED_int(PORT_B,1);
	LED_int(PORT_B,2);
	interrupt_int();
	TIMER_init();
}

void APP_start(){
	while(1)
	{
	
	switch(state)
	{
		case 1:
		allLedOff();
		LED_on(PORT_A,0);
		LED_on(PORT_B,2);
		TIMER_delay(state);
		if (state == 4) {state=1; break;}
		state = 2;
		break;
		
		case 2:
		allLedOff();
		uint8_t i =0;
		TIMER_set();
		while(i<20)//20
		{
			if (state == 4) { break;}
			LED_toggle(PORT_A,1);
			LED_toggle(PORT_B,1);
			while(ReadFlag()==0);
			FLAG_set();
			i++;
			
		}
		if (state == 4) {state=1; break;}
		state = 3;
		break;
		
		case 3:
		allLedOff();
		LED_on(PORT_A,2);
		LED_on(PORT_B,0);
		TIMER_delay(state);
		if (state == 4) {state=1; break;}
		state = 1;
		break;
		
		default:
		break;
	}	
	}
}

ISR(EXT_INT_0)
{
	uint8_t redCarState;
	DIO_read(PORT_A,2,&redCarState);
	if (redCarState == 1)
	{
		manPass();
	}
	else
	{
		manWait();
		manPass();
	}
	carWait();
	state = 4;
}

void carPass(void)
{
	allLedOff();
	LED_on(PORT_A,0);
	LED_on(PORT_B,2);
	TIMER_delay(1);
}

void manPass(void)
{
	allLedOff();
	LED_on(PORT_A,2);
	LED_on(PORT_B,0);
	TIMER_delay(1);
}


void carWait(void)
{
	allLedOff();
	LED_on(PORT_B,0);
	uint8_t i =0;
	TIMER_set();
	while(i<20)//20
	{
		LED_toggle(PORT_A,1);
		LED_toggle(PORT_B,1);
		while(ReadFlag()==0);
		FLAG_set();
		i++;
	}
}

void manWait(void)
{
	allLedOff();
	LED_on(PORT_B,2);
	uint8_t i =0;
	TIMER_set();
		while(i<20)//20
		{
			LED_toggle(PORT_A,1);
			LED_toggle(PORT_B,1);
			while(ReadFlag()==0);
			FLAG_set();
			i++;	
		}	
}

void allLedOff(void)
{
	LED_off(PORT_A,0);
	LED_off(PORT_A,1);
	LED_off(PORT_A,2);
	LED_off(PORT_B,0);
	LED_off(PORT_B,1);
	LED_off(PORT_B,2);
}
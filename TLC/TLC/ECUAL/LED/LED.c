/*
 * LED.c
 *
 * Created: 2/10/2023 5:53:13 PM
 *  Author: ahmed
 */ 

#include "LED.h"

int LED_int(uint8_t ledPort ,uint8_t ledPin)
{
	return DIO_int(ledPort,ledPin,OUT);
}
int LED_on(uint8_t ledPort ,uint8_t ledPin)
{
	return DIO_write(ledPort,ledPin,HIGH);
}
int LED_off(uint8_t ledPort ,uint8_t ledPin)
{
	return DIO_write(ledPort,ledPin,LOW);
}
int LED_toggle(uint8_t ledPort ,uint8_t ledPin)
{
	uint8_t x;
	DIO_read(ledPort,ledPin,&x);
	if (x==1)
	{
		return DIO_write(ledPort,ledPin,LOW);
	}
	else
	{
		return DIO_write(ledPort,ledPin,HIGH);
	}
}
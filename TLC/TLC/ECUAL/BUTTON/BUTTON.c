/*
 * BUTTON.c
 *
 * Created: 2/10/2023 5:52:05 PM
 *  Author: ahmed
 */ 


#include "BUTTON.h"


int BUTTOM_init(uint8_t buttomPort,uint8_t buttomPin)
{
	return DIO_int(buttomPort,buttomPin,IN);
}
int BUTTOM_read(uint8_t buttomPort,uint8_t buttomPin,uint8_t *value)
{
	return DIO_read(buttomPort,buttomPin,value);
}
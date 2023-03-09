/*
 * LED.h
 *
 * Created: 2/10/2023 5:52:58 PM
 *  Author: ahmed
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO/DIO.h"
#include "../../MCAL/TIMER/TIMER.h"
#include "../../MCAL/INTERRUPT/INTERRUPT.h"

int LED_int(uint8_t ledPort ,uint8_t ledPin);
int LED_on(uint8_t ledPort ,uint8_t ledPin);
int LED_off(uint8_t ledPort ,uint8_t ledPin);
int LED_toggle(uint8_t ledPort ,uint8_t ledPin);





#endif /* LED_H_ */
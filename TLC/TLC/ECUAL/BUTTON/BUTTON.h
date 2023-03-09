/*
 * BUTTON.h
 *
 * Created: 2/10/2023 5:52:38 PM
 *  Author: ahmed
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO/DIO.h"
#include "../../MCAL/TIMER/TIMER.h"
#include "../../MCAL/INTERRUPT/INTERRUPT.h"


int BUTTOM_init(uint8_t buttomPort,uint8_t buttomPin);
int BUTTOM_read(uint8_t buttomPort,uint8_t buttomPin,uint8_t *value);






#endif /* BUTTON_H_ */
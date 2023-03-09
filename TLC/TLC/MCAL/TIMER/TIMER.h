/*
 * TIMER.h
 *
 * Created: 2/10/2023 5:51:27 PM
 *  Author: ahmed
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "../../MICROCONTROLLER/REGISITER.h"

int TIMER_init(void);
int TIMER_delay(uint8_t breakDelay);
int TIMER_set(void);
int FLAG_set(void);
int ReadFlag(void);

#endif /* TIMER_H_ */
/*
 * APP.h
 *
 * Created: 2/10/2023 5:53:47 PM
 *  Author: ahmed
 */ 


#ifndef APP_H_
#define APP_H_

#include "../ECUAL/LED/LED.h"
#include "../ECUAL/BUTTON/BUTTON.h"



void APP_int();
void APP_start();

void carPass(void);
void manPass(void);
void carWait(void);
void manWait(void);
void allLedOff(void);


#endif /* APP_H_ */
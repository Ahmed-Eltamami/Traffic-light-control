/*
 * DIO.h
 *
 * Created: 2/10/2023 5:51:05 PM
 *  Author: ahmed
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../../MICROCONTROLLER/REGISITER.h"

#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

#define IN 0
#define OUT 1

#define LOW 0
#define HIGH 1


int DIO_int(uint8_t portNumber,uint8_t pinNumber , uint8_t direction);
int DIO_write(uint8_t portNumber,uint8_t pinNumber , uint8_t value);
int DIO_read(uint8_t portNumber,uint8_t pinNumber , uint8_t *value);



#endif /* DIO_H_ */
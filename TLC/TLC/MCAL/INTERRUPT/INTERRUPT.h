/*
 * INTERRUPT.h
 *
 * Created: 2/12/2023 1:33:58 AM
 *  Author: ahmed
 */ 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include "../../MICROCONTROLLER/REGISITER.h"


#define EXT_INT_0 __vector_1
#define EXT_INT_1 __vector_2
#define EXT_INT_2 __vector_3


#define sei() __asm__ __volatile__ ("sei" ::: "memory")
#define cli() __asm__ __volatile__ ("cli" ::: "memory")

#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used));\
void INT_VECT(void)


int interrupt_int(void);


#endif /* INTERRUPT_H_ */
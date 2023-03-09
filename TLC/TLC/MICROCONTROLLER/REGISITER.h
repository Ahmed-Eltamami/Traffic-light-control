/*
 * REGISITER.h
 *
 * Created: 2/11/2023 12:47:39 AM
 *  Author: ahmed
 */ 


#ifndef REGISITER_H_
#define REGISITER_H_

typedef unsigned char uint8_t;

//PORT A
#define PORTA *((volatile uint8_t*)0X3B)
#define DDRA *((volatile uint8_t*)0X3A)
#define PINA *((volatile uint8_t*)0X39)

//PORT B
#define PORTB *((volatile uint8_t*)0X38)
#define DDRB *((volatile uint8_t*)0X37)
#define PINB *((volatile uint8_t*)0X36)

//PORT C
#define PORTC *((volatile uint8_t*)0X35)
#define DDRC *((volatile uint8_t*)0X34)
#define PINC *((volatile uint8_t*)0X33)

//PORT D
#define PORTD *((volatile uint8_t*)0X32)
#define DDRD *((volatile uint8_t*)0X31)
#define PIND *((volatile uint8_t*)0X30)

//TIMER 0
#define TCCR0 *((volatile uint8_t*)0X53)
#define TCNT0 *((volatile uint8_t*)0X52)
#define TIFR *((volatile uint8_t*)0X58)

//interrupt
#define MCUCR *((volatile uint8_t*)0X55)
#define MCUCSR *((volatile uint8_t*)0X54)
#define GICR *((volatile uint8_t*)0X5B)
#define GIFR *((volatile uint8_t*)0X5A)

#define OK 0
#define ERORR 404






#endif /* REGISITER_H_ */
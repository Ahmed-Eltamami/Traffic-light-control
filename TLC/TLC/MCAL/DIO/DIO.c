/*
 * DIO.c
 *
 * Created: 2/10/2023 5:50:49 PM
 *  Author: ahmed
 */ 

#include "DIO.h"



int DIO_int(uint8_t portNumber,uint8_t pinNumber , uint8_t direction)
{
	switch(portNumber)
	{
		case PORT_A:
		if (direction == IN) // input state
		{
			DDRA &=~(1<<pinNumber);
			return OK;
		}
		else if (direction == OUT) // output state
		{
			DDRA |=(1<<pinNumber);
			return 0 ;
			
		}
		else
		{
			return ERORR;
		}
		
		
		break;
		
		case PORT_B:
		if (direction == IN) // input state
		{
			DDRB &=~(1<<pinNumber);
			return OK;
		}
		else if (direction == OUT) // output state
		{
			DDRB |=(1<<pinNumber);
			return OK;
		}
		else
		{
			return ERORR;
		}
		break;
		
		case PORT_C:
		
		if (direction == IN) // input state
		{
			DDRC &=~(1<<pinNumber);
			return OK;
		}
		else if (direction == OUT) // output state
		{
			DDRC |=(1<<pinNumber);
			return OK;
		}
		else
		{
			return ERORR;
		}
		
		break;
		
		case PORT_D:
		if (direction == IN) // input state
		{
			DDRD &=~(1<<pinNumber);
			return OK;
		}
		else if (direction == OUT) // output state
		{
			DDRD |=(1<<pinNumber);
			return OK;
		}
		else
		{
			return ERORR;
		}
		
		break;
		
		default:
		return ERORR;
		break;
		
	}
	
	
	
}

int DIO_write(uint8_t portNumber,uint8_t pinNumber , uint8_t value)
{
	
	switch(portNumber)
	{
		case PORT_A:
		if (value == LOW) //
		{
			PORTA &=~(1<<pinNumber);
			return OK;
		}
		else if (value == HIGH) // output state
		{
			PORTA |=(1<<pinNumber);
			return OK;
		}
		else
		{
			return ERORR;
		}
		
		
		break;
		
		case PORT_B:
		if (value == LOW) // input state
		{
			PORTB &=~(1<<pinNumber);
			return OK;
		}
		else if (value == HIGH) // output state
		{
			PORTB |=(1<<pinNumber);
			return OK;
		}
		else
		{
			return ERORR;
		}
		break;
		
		case PORT_C:
		
		if (value == LOW) // input state
		{
			PORTC &=~(1<<pinNumber);
			return OK;
		}
		else if (value == HIGH) // output state
		{
			PORTC |=(1<<pinNumber);
			return OK;
		}
		else
		{
			return ERORR;
		}
		
		break;
		
		case PORT_D:
		if (value == LOW) // input state
		{
			PORTD &=~(1<<pinNumber);
			return OK;
		}
		else if (value == HIGH) // output state
		{
			PORTD |=(1<<pinNumber);
			return OK;
		}
		else
		{
			return ERORR;
		}
		
		break;
		default:
		return ERORR;
		break;
		
	}
	
}
int DIO_read(uint8_t portNumber,uint8_t pinNumber , uint8_t *value)
{
	switch(portNumber)
	{
		case PORT_A:
		*value=(PINA&(1<<pinNumber))>>pinNumber;
		return OK;
		break;
		
		case PORT_B:
		*value=(PINB&(1<<pinNumber))>>pinNumber;
		return OK;
		break;
		
		case PORT_C:
		*value=(PINC&(1<<pinNumber))>>pinNumber;
		return OK;
		break;
		
		case PORT_D:
		*value=(PIND&(1<<pinNumber))>>pinNumber;
		return OK;
		break;
		
		default:
		return ERORR;
		break;
	}
	
}



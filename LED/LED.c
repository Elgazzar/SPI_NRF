/*
* LED.c
*
* Created: 4/6/2020 1:28:27 AM
*  Author: M7moudElgazzar
*/

#include <avr/io.h>
#include "util\delay.h"
#include "LED.h"

/*Initalize LED As OUTPUT Which is PB5*/
void Initialize_LED(void)
{
	/*Initialize Led as OUTPUT*/
	DDRB = (1<<PINB5);
}

void Toggle_LED(void)
{
	/*Toggle Led To make Sure Program is running*/
	if(!(PINB & (1<<PINB5)))/*Reading pin state,If pin is low turn LED on*/
	{
		LED_ON;
		_delay_ms(1000);
	}
	else
	{
		LED_OFF;
		_delay_ms(1000);
	}
}
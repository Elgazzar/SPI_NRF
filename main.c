/*
* SPI_NRF.c
*
* Created: 12/30/2019 10:01:11 PM
* Author : Elgazzar
*/
#define F_CPU 8000000UL  // 8 MHz
#include <avr/io.h>
#include "util/delay.h"
#include "SPI.h"
#include "LED.h"


int main(void)
{
	/*Initialize SPI*/
	SPI_MasterInit();
	while (1)
	{
		/*Transmit A*/
		SPI_MasterTransmit('A');
		/*delay for one second*/
		_delay_ms(1000);
	}
}







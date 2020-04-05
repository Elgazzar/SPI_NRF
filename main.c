/*
 * SPI_NRF.c
 *
 * Created: 12/30/2019 10:01:11 PM
 * Author : Elgazzar
 */ 

#include <avr/io.h>
#include "SPI.h"

/*Define a variable to toggle*/
char a = 0xFF;

int main(void)
{
    /* Replace with your application code */
	SPI_MasterInit();
    while (1) 
    {
		a = !a;
		SPI_MasterTransmit(a);
    }
}







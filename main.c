/*
* SPI_NRF.c
*
* Created: 12/30/2019 10:01:11 PM
* Author : Elgazzar
*/
#define F_CPU 8000000UL  // 8 MHz
#include <avr/io.h>
#include "util/delay.h"
#include <avr/interrupt.h>
#include "SPI.h"
#include "LED.h"
#include "NRF2401.h"

//role definitions
#define ROLETX 1 /*Enabled*/
#define ROLERX 0 /*Disabled*/

//sending buffer addresses
uint8_t sendpipe = 0;
uint8_t addrtx0[NRF24L01_ADDRSIZE] = NRF24L01_ADDRP0;
uint8_t addrtx1[NRF24L01_ADDRSIZE] = NRF24L01_ADDRP1;
uint8_t addrtx2[NRF24L01_ADDRSIZE] = NRF24L01_ADDRP2;
uint8_t addrtx3[NRF24L01_ADDRSIZE] = NRF24L01_ADDRP3;
uint8_t addrtx4[NRF24L01_ADDRSIZE] = NRF24L01_ADDRP4;
uint8_t addrtx5[NRF24L01_ADDRSIZE] = NRF24L01_ADDRP5;


	//nrf24l01 variables
	uint8_t bufferout[NRF24L01_PAYLOAD];
	uint8_t bufferin[NRF24L01_PAYLOAD];
	
int main(void)
{
	uint8_t txrxrole = 0; // 1 transmitter 0 receiver
	/*Initialize SPI*/
	SPI_MasterInit();
	//init nrf24l01
	nrf24l01_init();
	/*Enable Global Interrupt Bit*/
	sei();
	while (1)
	{
		if(txrxrole == ROLETX) {
			if(sendpipe == 0) {
				//set tx address for pipe 0
				nrf24l01_settxaddr(addrtx0);
				} else if(sendpipe == 1) {
				//set tx address for pipe 1
				nrf24l01_settxaddr(addrtx1);
				} else if(sendpipe == 2) {
				//set tx address for pipe 2
				nrf24l01_settxaddr(addrtx2);
				} else if(sendpipe == 3) {
				//set tx address for pipe 3
				nrf24l01_settxaddr(addrtx3);
				} else if(sendpipe == 4) {
				//set tx address for pipe 4
				nrf24l01_settxaddr(addrtx4);
				} else if(sendpipe == 5) {
				//set tx address for pipe 5
				nrf24l01_settxaddr(addrtx5);
			}
			//write buffer
			uint8_t writeret = nrf24l01_write(bufferout);
							sendpipe++;
							sendpipe%=6;
		}
	}
}







/*
 * SPI.h
 *
 * Created: 1/13/2020 12:09:26 AM
 *  Author: Elgazzar
 */ 


#ifndef SPI_H_
#define SPI_H_


#define DDR_SPI DDRB
#define DD_MOSI PB3
#define DD_SCK PB5
#define DD_MISO PB4

void SPI_MasterInit(void);
void SPI_MasterTransmit(char cData);
void SPI_SlaveInit(void);
char SPI_SlaveReceive(void);

#endif /* SPI_H_ */
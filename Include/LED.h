/*
 * LED.h
 *
 * Created: 4/6/2020 1:28:41 AM
 *  Author: M7moudElgazzar
 */ 


#ifndef LED_H_
#define LED_H_

#define LED_ON PORTB = (1<<PINB5)
#define LED_OFF PORTB = (0<<PINB5)

/*Toggle LED*/
void Toggle_LED(void);

/*Initialize LED As OUTPUT*/
void Initialize_LED(void);

#endif /* LED_H_ */
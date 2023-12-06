/*
 * led.h
 *
 *  Created on: ١٤‏/١١‏/٢٠٢٣
 *      Author: Mohamed Yousef
 *      Email:  my612641@gmail.com
 */

#ifndef ECUAL_LED_LED_H_
#define ECUAL_LED_LED_H_

void LED_init(DIO_Port_ID Port_ID, PIN_ID pin);
void LED_turnon(DIO_Port_ID Port_ID, PIN_ID pin);
void LED_turnoff(DIO_Port_ID Port_ID, PIN_ID pin);
void LED_toggle(DIO_Port_ID Port_ID, PIN_ID pin);

#endif /* ECUAL_LED_LED_H_ */

/*
 * buz.h
 *
 *  Created on: ١٤‏/١١‏/٢٠٢٣
 *      Author: Administrator
 */

#ifndef ECUAL_BUZ_BUZ_H_
#define ECUAL_BUZ_BUZ_H_

void BUZ_init(DIO_Port_ID Port_ID, PIN_ID pin);
void BUZ_toggle(DIO_Port_ID Port_ID, PIN_ID pin);
void BUZ_turnoff(DIO_Port_ID Port_ID, PIN_ID pin);
void BUZ_turnon(DIO_Port_ID Port_ID, PIN_ID pin);

#endif /* ECUAL_BUZ_BUZ_H_ */

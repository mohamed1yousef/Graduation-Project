/*
 * addresses.h
 *
 *  Created on: ١٤‏/١١‏/٢٠٢٣
 *      Author: Mohamed Yousef
 *      Email:  my612641@gmail.com
 */

#ifndef MCAL_ADDRESSES_H_
#define MCAL_ADDRESSES_H_

#define HARD_WARE_REG(X)  *((volatile uint8*)X)

/* GROUP A */
#define PORTA_REG  HARD_WARE_REG(0x3B)
#define DDRA_REG  HARD_WARE_REG(0x3A)
#define PINA_REG  HARD_WARE_REG(0x39)

/* GROUP B */
#define PORTB_REG HARD_WARE_REG(0x38)
#define DDRB_REG  HARD_WARE_REG(0x37)
#define PINB_REG  HARD_WARE_REG(0x36)
/* GROUP C */
#define PORTC_REG HARD_WARE_REG(0x35)
#define DDRC_REG  HARD_WARE_REG(0x34)
#define PINC_REG  HARD_WARE_REG(0x33)
/* GROUP D*/
#define PORTD_REG HARD_WARE_REG(0x32)
#define DDRD_REG  HARD_WARE_REG(0x31)
#define PIND_REG  HARD_WARE_REG(0x30)

#endif /* MCAL_ADDRESSES_H_ */

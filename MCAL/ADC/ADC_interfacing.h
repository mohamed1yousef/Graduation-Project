/*
 * ADC_interfacing.h
 *
 *  Created on: ٠٣‏/١٢‏/٢٠٢٣
 *      Author: Mohamed Yousef
 *      Email:  my612641@gmail.com
 */

#ifndef MCAL_ADC_ADC_INTERFACING_H_
#define MCAL_ADC_ADC_INTERFACING_H_

#define ADMUX   *((volatile uint8*)0x27)
#define ADCSRA  *((volatile uint8*)0X26)
#define ADCH    *((volatile uint8*)0X25)



void ADC_init();
uint8 ADC_return(uint8 channal);

#endif /* MCAL_ADC_ADC_INTERFACING_H_ */

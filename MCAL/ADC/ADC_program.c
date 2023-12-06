/*
 * ADC_program.c
 *
 *      Created on: ٠٣‏/١٢‏/٢٠٢٣
 *      Author: Mohamed Yousef
 *      Email:  my612641@gmail.com
 */


#include "../../LIB/mymath.h"
#include "../../LIB/std.h"
#include "ADC_interfacing.h"
#include "../DIO/DIO_interfacing.h"
void ADC_init(){

	//select vref
	Set_Bit(ADMUX,Pin6);
	Clear_Bit(ADMUX, Pin7);
	//select left adjust
	Set_Bit(ADMUX,Pin5);
	//select prescalear 111= DIVISIO FACTOR 128 IT MEAN F= 8 MHZ\128
	Set_Bit(ADCSRA,Pin0);
	Set_Bit(ADCSRA,Pin1);
	Set_Bit(ADCSRA,Pin2);
	//enable
	Set_Bit(ADCSRA,Pin7);
}
uint8 ADC_return(PIN_ID channal){
	 //SELCET CHANNEL
	 switch(channal){

	   case Pin0: ADMUX |=0X00; break;
	   case Pin1: ADMUX |=0X01; break;
	   case Pin2: ADMUX |=0X02; break;
	   case Pin3: ADMUX |=0X03; break;
	   case Pin4: ADMUX |=0X04; break;
	   case Pin5: ADMUX |=0X05; break;
	   case Pin6: ADMUX |=0X06; break;
	   case Pin7: ADMUX |=0X07; break;
	   default: ADMUX |=0X00; break;
	 }

	// START CONVERSION
	 Set_Bit(ADCSRA, Pin6);
	// CHECK FLAG
	 while(Get_Bit(ADCSRA,4)==0){

	 }
	 Set_Bit(ADCSRA,4);


	// READ DATA COVERTED
	 return ADCH;
}

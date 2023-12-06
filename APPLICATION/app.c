/*
 * app.c
 *
 *  Created on: ١٤‏/١١‏/٢٠٢٣
*      Author: Mohamed Yousef
 *      Email:  my612641@gmail.com
 */




#include "../MCAL/DIO/DIO_interfacing.h"
#include "util/delay.h"
#include "../MCAL/INTERRUPT/interrupt_interfacing.h"
#include "../LIB/mymath.h"
#include "../LIB/std.h"
void fun();

void fun(){
	//DIO_Set_pin_direction(PORTB, Pin1, Output);
	DIO_Set_pin_value(PORTA, Pin1, HIGH);

}

void app()
{

	uint8 me=0;
	DIO_Set_pin_direction(PORTA, Pin0, Output);
	DIO_Set_pin_direction(PORTA, Pin1, Output);
	DIO_Set_pin_direction(PORTA, Pin7, Input);
	DIO_Set_pin_direction(PORTD, Pin2,Input);
	ADC_init();
	me = ADC_return(Pin7);
	if(me >= 0){

		GIE_enable();
					INT_0_init();
				    INT0_CallBack(fun);
	}
	else{
		DIO_Set_pin_value(PORTA, Pin0, HIGH);
	}
/*
		DIO_Set_pin_direction(PORTA, Pin1, Output);
			DIO_Set_pin_value(PORTA, Pin1, HIGH);
			DIO_Set_pin_direction(PORTD, Pin2,Input);
			DIO_Set_pin_direction(PORTA, Pin0, Output);
			GIE_enable();
			INT_0_init();
		    INT0_CallBack(fun);*/

		    /*
		DIO_Set_pin_direction(PORTA, Pin0, Output);
			DIO_Set_pin_value(PORTA, Pin0, HIGH);
			_delay_ms(500);
			DIO_Set_pin_value(PORTA, Pin0, LOW);
			_delay_ms(100);
				DIO_Set_pin_value(PORTA, Pin0, HIGH);

*/
	/*
	LED_init(PORTA, Pin0);
	LED_turnon(PORTA, Pin0);
		_delay_ms(100);
		LED_toggle(PORTA, Pin0);
	_delay_ms(100);
	LED_turnoff(PORTA, Pin0);
	_delay_ms(100);
	LED_turnon(PORTA, Pin0);
	_delay_ms(1000);
    BUZ_init(PORTB, Pin0);
    BUZ_turnoff(PORTB, Pin0);
    BUZ_turnon(PORTB, Pin0);
	_delay_ms(500);
    BUZ_turnoff(PORTB, Pin0);
	_delay_ms(300);
    BUZ_toggle(PORTB, Pin0);
    DIO_Set_Port_value(PORTD, 0XFF);
*/

}



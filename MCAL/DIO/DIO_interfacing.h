/*
 * DIO_interfacing.h
 *
 *  Created on: ١٤‏/١١‏/٢٠٢٣
*      Author: Mohamed Yousef
 *      Email:  my612641@gmail.com
 */

#ifndef MCAL_DIO_DIO_INTERFACING_H_
#define MCAL_DIO_DIO_INTERFACING_H_

typedef enum{
	Input, //0
	Output //1
}DIO_direction;

typedef enum{
	PORTA,
	PORTB,
	PORTC,
	PORTD
}DIO_Port_ID;

typedef enum{
	LOW, //0
	HIGH //1
}Set_value;

typedef enum{
	Pin0,
	Pin1,
	Pin2,
	Pin3,
	Pin4,
	Pin5,
	Pin6,
	Pin7,

}PIN_ID;

typedef enum{
	FUNC_OK, //0
	FUNC_NOK //1
}ERROR_STATE;

ERROR_STATE DIO_Set_Port_Dirction (DIO_Port_ID Port_ID, DIO_direction Direction );
ERROR_STATE DIO_Set_Port_value (DIO_Port_ID Port_ID , Set_value value);
ERROR_STATE DIO_Set_pin_direction (DIO_Port_ID Port_ID, PIN_ID pin, DIO_direction  Direction);
ERROR_STATE DIO_Set_pin_value (DIO_Port_ID Port_ID , PIN_ID pin, Set_value value);
ERROR_STATE DIO_Toggle_Pin(DIO_Port_ID Port_ID, PIN_ID pin);
Set_value DIO_Get_pin_value (DIO_Port_ID Port_ID , PIN_ID pin);



#endif /* MCAL_DIO_DIO_INTERFACING_H_ */

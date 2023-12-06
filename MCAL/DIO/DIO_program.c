 /*
 * DIO_program.c
 *
 *  Created on: ١٤‏/١١‏/٢٠٢٣
 *      Author: Mohamed Yousef
 *      Email:  my612641@gmail.com
 */

#include "../../LIB/mymath.h"
#include "../../LIB/std.h"
#include "address.h"
#include "DIO_interfacing.h"


ERROR_STATE DIO_Set_pin_direction (DIO_Port_ID Port_ID, PIN_ID pin, DIO_direction  Direction)
{
	ERROR_STATE Local_Errorstate = FUNC_OK;
	if((Port_ID <= PORTD) && (pin <= Pin7))
	{
		if(Output == Direction)
		{
			switch(Port_ID)
			{
					   case PORTA: DDRA_REG |= (1<<pin); break;
					   case PORTB: DDRB_REG |= (1<<pin); break;
					   case PORTC: DDRC_REG |= (1<<pin); break;
					   case PORTD: DDRD_REG |= (1<<pin); break;
					   default: Local_Errorstate = FUNC_NOK;
			}
		}
		else
		{
			switch(Port_ID)
						{
								   case PORTA: DDRA_REG &=~ (1<<pin); break;
								   case PORTB: DDRB_REG &=~ (1<<pin); break;
								   case PORTC: DDRC_REG &=~ (1<<pin); break;
								   case PORTD: DDRD_REG &=~ (1<<pin); break;
								   default: Local_Errorstate = FUNC_NOK;
						}
		}

	}
	else
	{
		Local_Errorstate = FUNC_NOK;
	}
	return Local_Errorstate;
}



ERROR_STATE DIO_Set_pin_value (DIO_Port_ID Port_ID , PIN_ID pin, Set_value value)
{
	ERROR_STATE Local_Errorstate = FUNC_OK; /* no error */
	if((Port_ID <= PORTD) && (pin <= Pin7))
		{
			if(HIGH == value)
			{
				switch(Port_ID)
				{
						   case PORTA: Set_Bit(PORTA_REG , pin); break;
						   case PORTB: Set_Bit(PORTB_REG , pin); break;
						   case PORTC: Set_Bit(PORTC_REG , pin); break;
						   case PORTD: Set_Bit(PORTD_REG , pin); break;
						   default: Local_Errorstate = FUNC_NOK; /* error */
				}
			}
			else
			{
				switch(Port_ID)
				{
				           case PORTA: Set_Bit(PORTA_REG , pin); break;
						   case PORTB: Clear_Bit(PORTB_REG , pin); break;
						   case PORTC: Clear_Bit(PORTC_REG , pin); break;
						   case PORTD: Clear_Bit(PORTD_REG , pin); break;
						   default: Local_Errorstate = FUNC_NOK;   /* error */
				}
			}

		}
		else
		{
                  Local_Errorstate = FUNC_NOK;     /* error */
		}
	return Local_Errorstate;
}


Set_value DIO_Get_pin_value (DIO_Port_ID Port_ID , PIN_ID pin){
	Set_value value=0;
	if((Port_ID <= PORTD) && (pin <= Pin7))
			{
	        	switch(Port_ID)
				{
					 case PORTA: value = Get_Bit(PINA_REG, pin); break;
					 case PORTB: value = Get_Bit (PINB_REG, pin); break;
				     case PORTC: value = Get_Bit (PINC_REG, pin); break;
					 case PORTD: value = Get_Bit (PIND_REG, pin); break;
				}

			}
			else
			{
			  }
	return value;
}


ERROR_STATE DIO_Set_Port_value (DIO_Port_ID Port_ID , uint8 value){
	ERROR_STATE Local_Errorstate = FUNC_OK;  /* no error */
	switch (Port_ID)
	{
    	case PORTA : PORTA_REG = value;  break;
    	case PORTB : PORTB_REG = value;  break;
    	case PORTC : PORTC_REG = value;  break;
    	case PORTD : PORTD_REG = value;  break;
    	default: Local_Errorstate = FUNC_NOK;  /* error */
	}
	return Local_Errorstate;
}


ERROR_STATE DIO_Set_Port_Dirction (DIO_Port_ID Port_ID, DIO_direction Direction ){
	ERROR_STATE Local_Errorstate = FUNC_OK; /* no error */
	if( Output == Direction)
{
    switch (Port_ID)
    {
        case PORTA :  DDRA_REG =0XFF;   break;
        case PORTB :  DDRB_REG  =0XFF;  break;
        case PORTC :  DDRC_REG  =0XFF;  break;
        case PORTD :  DDRD_REG  =0XFF;  break;
        default: Local_Errorstate = FUNC_NOK; /* error */
    }

}
	else
	{
		 switch (Port_ID)
		 {
         case PORTA :  PORTA_REG =0XFF;   break;
        case PORTB :  DDRB_REG  =0X00;  break;
        case PORTC :  DDRC_REG  =0X00;  break;
        case PORTD :  DDRD_REG  =0XFF;  break;
        default: Local_Errorstate = FUNC_NOK; /* error */
	}
}
	return Local_Errorstate;
}

ERROR_STATE DIO_Toggle_Pin(DIO_Port_ID Port_ID, PIN_ID pin){
	ERROR_STATE Local_Errorstate = FUNC_OK; /* no error */

	switch (Port_ID)
		{
	    	case PORTA : Toggle_Bit(PORTA_REG, pin);  break;
	    	case PORTB : Toggle_Bit(PORTB_REG, pin);  break;
	    	case PORTC : Toggle_Bit(PORTC_REG, pin);  break;
	    	case PORTD : Toggle_Bit(PORTD_REG, pin);  break;
	    	default: Local_Errorstate = FUNC_NOK;  /* error */
		}
	return Local_Errorstate;
}

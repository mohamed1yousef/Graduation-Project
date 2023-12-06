/*
 * led.c
 *
 *  Created on: ١٤‏/١١‏/٢٠٢٣
 *      Author: Mohamed Yousef
 *      Email:  my612641@gmail.com
 */

#include "../../MCAL/DIO/DIO_interfacing.h"
#include "led.h"

#include "../../LIB/mymath.h"
#include "../../LIB/std.h"

/*
 * @file    led.c
 * @brief   function for initilzation one led in one pin
 * @date    14/11/2023
 * @return  void
 */
void LED_init(DIO_Port_ID Port_ID, PIN_ID pin)
{
	DIO_Set_pin_direction(Port_ID, pin, Output);
}

/*
 * @file    led.c
 * @brief   function for turn on one led in one pin
 * @date    14/11/2023
 * @return  void
 */
void LED_turnon(DIO_Port_ID Port_ID, PIN_ID pin)
{
	DIO_Set_pin_value(Port_ID, pin, HIGH);
}

/*
 * @file    led.c
 * @brief   function for turn off one led in one pin
 * @date    14/11/2023
 * @return  void
 */
void LED_turnoff(DIO_Port_ID Port_ID, PIN_ID pin)
{
		DIO_Set_pin_value(Port_ID, pin, LOW);
}

/*
 * @file    led.c
 * @brief   function for toggle one led in one pin
 * @date    14/11/2023
 * @return  void
 */
void LED_toggle(DIO_Port_ID Port_ID, PIN_ID pin)
{
        DIO_Toggle_Pin(Port_ID, pin);
}



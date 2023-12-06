/*
 * buz.c
 *
 *  Created on: ١٤‏/١١‏/٢٠٢٣
 *      Author: Administrator
 */

#include "../../MCAL/DIO/DIO_interfacing.h"
#include "buz.h"

#include "../../LIB/mymath.h"
#include "../../LIB/std.h"
/*
 * @file    buz.c
 * @brief   function for initilzation one BUZ in one pin
 * @date    14/11/2023
 * @return  void
 */
void BUZ_init(DIO_Port_ID Port_ID, PIN_ID pin)
{
	DIO_Set_pin_direction(Port_ID, pin, Output);
}

/*
 * @file    buz.c
 * @brief   function for turn on one BUZ in one pin
 * @date    14/11/2023
 * @return  void
 */
void BUZ_turnon(DIO_Port_ID Port_ID, PIN_ID pin)
{
	DIO_Set_pin_value(Port_ID, pin, HIGH);
}

/*
 * @file    buz.c
 * @brief   function for turn off one BUZ in one pin
 * @date    14/11/2023
 * @return  void
 */
void BUZ_turnoff(DIO_Port_ID Port_ID, PIN_ID pin)
{
		DIO_Set_pin_value(Port_ID, pin, LOW);
}

/*
 * @file    buz.c
 * @brief   function for toggle one buz in one pin
 * @date    14/11/2023
 * @return  void
 */
void BUZ_toggle(DIO_Port_ID Port_ID, PIN_ID pin)
{
        DIO_Toggle_Pin(Port_ID, pin);
}


/*
 * interrupt_program.c
 *
 *      Author: Mohamed Yousef
 *      Email:  my612641@gmail.com
 */

#include "../../LIB/mymath.h"
#include "../../LIB/std.h"
#include "interrupt_interfacing.h"
#include "../DIO/DIO_interfacing.h"

void GIE_enable(void){
	Set_Bit(SREG,SREG_BIT7);
}

void GIE_disenale(void){
  Clear_Bit(SREG,SREG_BIT7);
}

void INT_0_init(){
  Set_Bit(GICR,GICR_INT0_BIT6);
  if(action_sense == Any_logical_change){
	  Set_Bit(MCUCR,MCUCR_INT0_ISC00);
	  Clear_Bit(MCUCR,MCUCR_INT0_ISC01);
  }
  else if(action_sense == The_low_level){
	  Clear_Bit(MCUCR,MCUCR_INT0_ISC00);
	  Clear_Bit(MCUCR,MCUCR_INT0_ISC01);

  }
  else if(action_sense == The_falling_edge){
	  Clear_Bit(MCUCR,MCUCR_INT0_ISC00);
	  Set_Bit(MCUCR,MCUCR_INT0_ISC01);
    }
  else{
	  Set_Bit(MCUCR,MCUCR_INT0_ISC00);
	  Set_Bit(MCUCR,MCUCR_INT0_ISC01);
  }

}

void INT_1_init(){
	Set_Bit(GICR,GICR_INT1_BIT7);
	if(action_sense == Any_logical_change){
		Set_Bit(MCUCR,MCUCR_INT1_ISC10);
		Clear_Bit(MCUCR,MCUCR_INT1_ISC11);
	}
	else if(action_sense == The_low_level){
		Clear_Bit(MCUCR,MCUCR_INT1_ISC10);
		Clear_Bit(MCUCR,MCUCR_INT1_ISC11);

	}
	else if(action_sense == The_falling_edge){
		Clear_Bit(MCUCR,MCUCR_INT1_ISC10);
		Set_Bit(MCUCR,MCUCR_INT1_ISC11);
	}
	else{
		Set_Bit(MCUCR,MCUCR_INT1_ISC10);
		Set_Bit(MCUCR,MCUCR_INT1_ISC11);
	}
}

void INT_2_init(){
	Set_Bit(GICR,GICR_INT2_BIT5);
	if(action_sense_INT_2 == The_falling_edge_INT_2){
		Clear_Bit(MCUCSR,MCUCSR_INT2_ISC2);
	}
	else{
		Set_Bit(MCUCSR,MCUCSR_INT2_ISC2);
	}

}

void (*INT0_ISR) (void) = NULL;
void (*INT1_ISR) (void) = NULL;
void (*INT2_ISR) (void) = NULL;
void INT0_CallBack(void (*func)(void)){
	if(func!=NULL){
		INT0_ISR=func;
	}
}

void INT2_CallBack(void (*func)(void)){
	if(func!=NULL){
		INT2_ISR=func;
	}
}
void INT1_CallBack(void (*func)(void)){
	if(func!=NULL){
		INT1_ISR=func;
	}
}
/*
// end user will call it in main and pass to it a function of the instruction when interrupt happen in int0
void INT0_callback(void (*func)(void)){
	if(func != NULL){

		INT0_ISR = func;
		DIO_Set_pin_direction(PORTC, Pin0, Output);
					DIO_Set_pin_value(PORTC, Pin0, HIGH);
	}
}


// end user will call it main and pass to it a function of the instruction when interrupt happen in int1
void INT1_callback(void (*func)(void)){
	if(func != NULL){
		INT1_ISR = func;

	}
}


// end user will call it main and pass to it a function of the instruction when interrupt happen in int1
void INT2_callback(void (*func)(void)){
	if(func != NULL){
			INT2_ISR = func;
		}
}
*/
void __vector_1 (void)__attribute__((signal, used));
void __vector_1(void){
	//DIO_Set_pin_direction(PORTC, Pin1, Output);
		//DIO_Set_pin_value(PORTC, Pin1, HIGH);
	INT0_ISR();
	//DIO_Set_pin_direction(PORTB, Pin2, Output);
		//	DIO_Set_pin_value(PORTB, Pin2, HIGH);
}
void __vector_2 (void)__attribute__((signal, used));
void __vector_2(void){
	INT1_ISR();


	}

void __vector_3 (void)__attribute__((signal, used));
void __vector_3(void){
	INT2_ISR();


	}
/*
void (*INT0_ISR) (void)=NULL;
void (*INT1_ISR) (void)=NULL;
void (*INT2_ISR) (void)=NULL;

void INT0_CallBack(void (*func)(void)){
	if(func!=NULL){
		INT0_ISR=func;
	}
}

void INT2_CallBack(void (*func)(void)){
	if(func!=NULL){
		INT2_ISR=func;
	}
}
void INT1_CallBack(void (*func)(void)){
	if(func!=NULL){
		INT1_ISR=func;
	}
}

void __vector_1 (void)__attribute__((signal));
void __vector_1(void){
	INT0_ISR();
}
void __vector_2 (void)__attribute__((signal));
void __vector_2(void){
	INT1_ISR();
}
void __vector_3 (void)__attribute__((signal));
void __vector_3(void){
	INT2_ISR();
}
*/

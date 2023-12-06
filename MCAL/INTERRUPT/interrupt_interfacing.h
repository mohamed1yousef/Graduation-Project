/*
 * interrupt_interfacing.h
 *
 *      Author: Mohamed Yousef
 *      Email:  my612641@gmail.com
 */

#ifndef MCAL_INTERRUPT_INTERRUPT_INTERFACING_H_
#define MCAL_INTERRUPT_INTERRUPT_INTERFACING_H_

#define NULL 0

#define MCUCR   *((volatile uint8*)0x55)
#define MCUCSR  *((volatile uint8*)0x54)
#define GICR    *((volatile uint8*)0x5B)
#define SREG    *((volatile uint8*)0x5F)

// Global Interrupt Enable Bit
#define SREG_BIT7    7

//INTERRUPT 0
#define MCUCR_INT0_ISC01  1
#define MCUCR_INT0_ISC00  0
#define GICR_INT0_BIT6    6

//INTERRUPT 1
#define MCUCR_INT1_ISC10  2
#define MCUCR_INT1_ISC11  3
#define GICR_INT1_BIT7    7

//INTERRUPT 2
#define MCUCSR_INT2_ISC2  6
#define GICR_INT2_BIT5    5

#define The_low_level       0
#define Any_logical_change  1
#define The_falling_edge    2
#define The_rising_edge     3
#define action_sense  The_rising_edge //end user will choose

#define The_falling_edge_INT_2    0
#define The_rising_edge_INT_2     1
#define action_sense_INT_2  The_falling_edge_INT_2 //end user will choose

void GIE_enable(void);
void GIE_disenale(void);
void INT_0_init();
void INT_1_init();
void INT_2_init();
/*
void INT0_callback(void (*func)(void));
void INT1_callback(void (*func)(void));
void INT2_callback(void (*func)(void));

*/
void INT0_CallBack(void (*func)(void));
void INT1_CallBack(void (*func)(void));
void INT2_CallBack(void (*func)(void));


#endif /* MCAL_INTERRUPT_INTERRUPT_INTERFACING_H_ */

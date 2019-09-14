/*
 * Initialization.c
 *
 *  Created on: Apr 16, 2019
 *      Author: ahmed
 */
#include"Initialization.h"
#include"tm4c123gh6pm.h"
#include"stdbool.h"
#include "stdint.h"

/*
 * preconditions: target is connected properly to the device.
 * postconditions : PortF pins(1-2-3) are enable and ready to use.
 */
extern void PortF_Init(void)
 {
	 SYSCTL_RCGCGPIO_R |= 0x20;
	 GPIO_PORTF_LOCK_R |= 0x4C4F434B;
	 GPIO_PORTF_CR_R    =  0xFF;
	 GPIO_PORTF_DIR_R   = 0x0E;
	 GPIO_PORTF_DEN_R  |= DIGITAL_PINS;
 }
void PortE_Init(void)
   {
  	 SYSCTL_RCGCGPIO_R = 0xff;
  	 GPIO_PORTE_LOCK_R |= 0x4C4F434B;
  	 GPIO_PORTE_CR_R    =  0xFF;
  	 GPIO_PORTE_DIR_R   = 0x00;
  	GPIO_PORTF_PDR_R=0x0F;
  	 //GPIO_PORTE_PUR_R  = 0x0F;
  	 GPIO_PORTE_DEN_R  |= 0xFF;
   }
 void PortB_Init(void)
   {
  	 SYSCTL_RCGCGPIO_R |= 0xFF;
  	 GPIO_PORTB_LOCK_R |= 0x4C4F434B;
  	 GPIO_PORTB_CR_R    =  0xFF;
  	 GPIO_PORTB_DIR_R   = 0xFF;
  	 GPIO_PORTB_PUR_R  =0 ;
  	 GPIO_PORTB_DEN_R  |= 0xFF;
   }
/* preconditions: 1-target is connected properly to the device.
 *                2-TIME_PER_PERIOD is initialized with desired value.
 *
 * postconditions: Systick timer is enabled and have started with the desired value.
 */
extern void SYS(void)
 {
 	        NVIC_ST_CTRL_R = INITIALIZE_TO_ZERO;                    //Disable systick
 		    NVIC_ST_RELOAD_R = TIME_PER_PERIOD;                     //Initialize timer with desired value
 			NVIC_ST_CURRENT_R = INITIALIZE_TO_ZERO;                 //Initialize current value to zero
 			NVIC_ST_CTRL_R = SYSTICK_ENABLE;                        //Enable internal clk source and systick timer
}
/*pre: Systick timer is enabled and initiaized with desired value.
 *
 *post: As soon as the time per period is fired , period is completed and Time_out is true.
 */
extern bool checkStatus(void){return TIME_OUT;}






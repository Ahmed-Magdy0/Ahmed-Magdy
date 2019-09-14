/*
 * Tasks.c
 *`
 *  Created on: Apr 16, 2019
 *      Author: ahmed
 */
#include "Tasks.h"
#include"tm4c123gh6pm.h"
#include "stdint.h"
#include"stdio.h"
uint32_t mul=0;

Tasks_t tasks[]={

		{
				.code   = Read_SW,
				.period = 1
		},
		{
				.code   = LED_ON,
	            .period = 3
		},

};

const uint8_t Num_of_tasks=(sizeof(tasks)/sizeof(Tasks_t));


//static void Task4(void){TOGGLE_COLOR(GPIO_PORTF_DATA_R, WHITE_COLOR);}


void Read_SW(void){

	mul= (F_SW* S_SW);

}

void LED_ON(void){

	GPIO_PORTB_DATA_R=mul;


}


/*extern uint8_t mul(void){
	uint8_t i=0;
	int arr[] = {F_SW,S_SW};
while(1){
if(F_SW != 3 ||S_SW != 3  )
  return ((arr[i]*arr[i+1]));
}
}

extern void Leds(void){

GPIO_PORTB_DATA_R= mul();
GPIO_PORTB_DATA_R=0;
}*/


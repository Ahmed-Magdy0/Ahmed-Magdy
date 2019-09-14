/*
 * Tasks.h
 *
 *  Created on: Apr 16, 2019
 *      Author: ahmed
 */

#ifndef TASKS_H_
#define TASKS_H_
#include "stdint.h"


#define   TOGGLE_COLOR(REG,COLOR)   (REG ^= COLOR)
#define   RED_COLOR                 (1<<1)
#define   BLUE_COLOR                (1<<2)
#define   GREEN_COLOR               (1<<3)
#define   WHITE_COLOR               (RED_COLOR|BLUE_COLOR)

#define F_SW      (GPIO_PORTE_DATA_R&0x03)
#define S_SW      ((GPIO_PORTE_DATA_R&0x0C)>>2)

typedef struct Task_t{

	void (*code)(void);
   uint32_t period;

}Tasks_t;

extern Tasks_t tasks[];
extern const uint8_t Num_of_tasks;
//extern uint8_t mul(void);
//extern void Leds(void);
void Read_SW(void);
void LED_ON(void);


#endif /* TASKS_H_ */

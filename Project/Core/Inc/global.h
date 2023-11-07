/*
 * global.h
 *
 *  Created on: Oct 21, 2023
 *      Author: PC
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "button.h"
#include "leds.h"

//#define INIT		1
//#define AUTO_RED	2
//#define AUTO_GREEN	3
//#define AUTO_YELLOW	4

#define RED_GREEN 13
#define RED_YELLOW 12
#define GREEN_RED 31
#define YELLOW_RED 21

#define INIT 0
#define DEFAULT 999

#define MODE_1 1
#define MODE_2 2
#define MODE_3 3
#define MODE_4 4

extern int RED_time;
extern int YELLOW_time;
extern int GREEN_time;
extern int remain_time1;
extern int remain_time2;

extern int mode_status;
extern int led_status;

void fsm();
void fsm_manual_run();
#endif /* INC_GLOBAL_H_ */

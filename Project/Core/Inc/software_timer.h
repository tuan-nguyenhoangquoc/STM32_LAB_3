/*
 * software_timer.h
 *
 *  Created on: Oct 21, 2023
 *      Author: PC
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define TIMER_CYCLE	10

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;
extern int timer5_flag;
extern int timer6_flag;
extern int timer7_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);
void setTimer5(int duration);
void setTimer6(int duration);
void setTimer7(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */

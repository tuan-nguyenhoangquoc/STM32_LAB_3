/*
 * fsm_automatic.c
 *
 *  Created on: Oct 21, 2023
 *      Author: PC
 */

#include "fsm_automatic.h"


int led_status = INIT;

int mode_status = DEFAULT;

int RED_time = 5;
int YELLOW_time = 2;
int GREEN_time = 3;

int remain_time1 = 0;
int remain_time2 = 0;



void fsm(){
	switch(led_status){
	case INIT:
		clear_leds();
		led_status = RED_GREEN;
		remain_time1 = RED_time;
		remain_time2 = GREEN_time;
		setTimer1(remain_time2*1000);
		updateBuffer1(remain_time1);
		updateBuffer2(remain_time2);
		setTimer2(10);
		break;
	case RED_GREEN:
		if(isButton1Pressed() == 1){
			led_status = DEFAULT;
			mode_status = INIT;
		}
		led_on(RED_GREEN);
		if(timer1_flag == 1){
			led_status = RED_YELLOW;
			remain_time2 = YELLOW_time;
			setTimer1(remain_time2*1000);
			setTimer2(10);
		}
		if(timer2_flag == 1){
			updateBuffer1(remain_time1--);
			updateBuffer2(remain_time2--);
			setTimer2(1000);
		}
		break;
	case RED_YELLOW:
		led_on(RED_YELLOW);
		if(timer1_flag == 1){
			led_status = GREEN_RED;
			remain_time1 = GREEN_time;
			remain_time2 = RED_time;
			setTimer1(remain_time1*1000);
			setTimer2(10);
		}
		if(timer2_flag == 1){
			updateBuffer1(remain_time1--);
			updateBuffer2(remain_time2--);
			setTimer2(1000);
		}
		break;
	case GREEN_RED:
		led_on(GREEN_RED);
		if(timer1_flag == 1){
			led_status = YELLOW_RED;
			remain_time1 = YELLOW_time;
			setTimer1(remain_time1*1000);
			setTimer2(10);
		}
		if(timer2_flag == 1){
			updateBuffer1(remain_time1--);
			updateBuffer2(remain_time2--);
			setTimer2(1000);
		}
		break;
	case YELLOW_RED:
		led_on(YELLOW_RED);
		if(timer1_flag == 1){
			led_status = RED_GREEN;
			remain_time1 = RED_time;
			remain_time2 = GREEN_time;
			setTimer1(remain_time1*1000);
			setTimer2(10);
		}
		if(timer2_flag == 1){
			updateBuffer1(remain_time1--);
			updateBuffer2(remain_time2--);
			setTimer2(1000);
		}
		break;

	default:
		break;
	}
}

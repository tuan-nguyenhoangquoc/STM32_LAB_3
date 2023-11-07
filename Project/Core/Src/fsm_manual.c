/*
 * fsm_manual.c
 *
 *  Created on: Oct 21, 2023
 *      Author: PC
 */

#include "fsm_manual.h"


int ready_to_move = 1;
int index = 0;

void blink_2hz(int mode){

	if(timer6_flag == 1){
	switch(mode){
	case MODE_2:
			HAL_GPIO_TogglePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin);
			HAL_GPIO_TogglePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
			setTimer6(500);
		break;
	case MODE_3:
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
			HAL_GPIO_TogglePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin);
			HAL_GPIO_TogglePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
			setTimer6(500);
		break;
	case MODE_4:
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
			HAL_GPIO_TogglePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin);
			HAL_GPIO_TogglePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin);
			setTimer6(500);
		break;
	default:
			break;
	}
	}
}

void sub_display7SEG(){
	index = index + 0;
	if(timer5_flag == 1){
		update7SEG(index);
		update7SEG2(index);
		index = index + 1;
		index = index % 4;
		setTimer5(250);
	}
	blink_2hz(mode_status);
}

void fsm_manual_run(){
	switch(mode_status){
		case INIT:
			mode_status = MODE_2;
			break;

		case MODE_2:
			updateBuffer1(mode_status);
			updateBuffer2(RED_time);
			sub_display7SEG();

			if(isButton1Pressed() == 1){
				if(ready_to_move == 1)
					mode_status = MODE_3;
				else isButton1Pressed();
			}
			else{
				if(isButton2Pressed() == 1){
					RED_time = RED_time % 99 + 1;
					ready_to_move = 0;
				}
				if(isButton3Pressed() == 1)
					ready_to_move = 1;
			}
			break;

		case MODE_3:
			updateBuffer1(mode_status);
			updateBuffer2(YELLOW_time);
			sub_display7SEG();
			if(isButton1Pressed() == 1){
				if(ready_to_move == 1)
					mode_status = MODE_4;
				else isButton1Pressed();
			}
			else{

				if(isButton2Pressed() == 1){
					YELLOW_time = YELLOW_time % 99 + 1;
					ready_to_move = 0;

				}
				if(isButton3Pressed() == 1)
					ready_to_move = 1;
			}
			break;

		case MODE_4:

			updateBuffer1(mode_status);
			updateBuffer2(GREEN_time);
			sub_display7SEG();
			if(isButton1Pressed() == 1){
				if(ready_to_move == 1){
					mode_status = DEFAULT;
					led_status = RED_GREEN;
					remain_time1 = RED_time;
					remain_time2 = GREEN_time;
					setTimer1(remain_time2*1000);
					updateBuffer1(remain_time1);
					updateBuffer2(remain_time2);
					setTimer2(10);
				}
				else isButton1Pressed();
			}
			else{

				if(isButton2Pressed() == 1){
					GREEN_time = GREEN_time % 99 + 1;
					ready_to_move = 0;

				}
				if(isButton3Pressed() == 1)
					ready_to_move = 1;
			}
			break;

		default:
			break;
		}
}

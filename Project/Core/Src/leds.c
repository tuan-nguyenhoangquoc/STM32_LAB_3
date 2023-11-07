/*
 * leds.c
 *
 *  Created on: Oct 21, 2023
 *      Author: PC
 */

#include "leds.h"
#include "main.h"

#define RED_GREEN 13
#define RED_YELLOW 12
#define GREEN_RED 31
#define YELLOW_RED 21

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[2] = {1, 2};
int led_buffer2[2] = {3, 4};

void display7SEG(int num){
	switch(num){
	case 0:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, RESET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, SET);
		  break;
	case 1:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, SET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, SET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, SET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, SET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, SET);
		  break;
	case 2:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, SET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, RESET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, SET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, RESET);
		  break;
	case 3:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, SET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, SET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, RESET);
		  break;
	case 4:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, SET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, SET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, SET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, RESET);
		  break;
	case 5:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, SET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, SET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, RESET);
		  break;
	case 6:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, SET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, RESET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, RESET);
		  break;
	case 7:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, SET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, SET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, SET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, SET);
		  break;
	case 8:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, RESET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, RESET);
		  break;
	case 9:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, SET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, RESET);
		  break;
	default:
		  break;
	}
}

void display7SEG2(int num){
	switch(num){
	case 0:
		  HAL_GPIO_WritePin(Led_a2_GPIO_Port, Led_a2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b2_GPIO_Port, Led_b2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c2_GPIO_Port, Led_c2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d2_GPIO_Port, Led_d2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e2_GPIO_Port, Led_e2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_f2_GPIO_Port, Led_f2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g2_GPIO_Port, Led_g2_Pin, SET);
		  break;
	case 1:
		  HAL_GPIO_WritePin(Led_a2_GPIO_Port, Led_a2_Pin, SET);
		  HAL_GPIO_WritePin(Led_b2_GPIO_Port, Led_b2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c2_GPIO_Port, Led_c2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d2_GPIO_Port, Led_d2_Pin, SET);
		  HAL_GPIO_WritePin(Led_e2_GPIO_Port, Led_e2_Pin, SET);
		  HAL_GPIO_WritePin(Led_f2_GPIO_Port, Led_f2_Pin, SET);
		  HAL_GPIO_WritePin(Led_g2_GPIO_Port, Led_g2_Pin, SET);
		  break;
	case 2:
		  HAL_GPIO_WritePin(Led_a2_GPIO_Port, Led_a2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b2_GPIO_Port, Led_b2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c2_GPIO_Port, Led_c2_Pin, SET);
		  HAL_GPIO_WritePin(Led_d2_GPIO_Port, Led_d2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e2_GPIO_Port, Led_e2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_f2_GPIO_Port, Led_f2_Pin, SET);
		  HAL_GPIO_WritePin(Led_g2_GPIO_Port, Led_g2_Pin, RESET);
		  break;
	case 3:
		  HAL_GPIO_WritePin(Led_a2_GPIO_Port, Led_a2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b2_GPIO_Port, Led_b2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c2_GPIO_Port, Led_c2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d2_GPIO_Port, Led_d2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e2_GPIO_Port, Led_e2_Pin, SET);
		  HAL_GPIO_WritePin(Led_f2_GPIO_Port, Led_f2_Pin, SET);
		  HAL_GPIO_WritePin(Led_g2_GPIO_Port, Led_g2_Pin, RESET);
		  break;
	case 4:
		  HAL_GPIO_WritePin(Led_a2_GPIO_Port, Led_a2_Pin, SET);
		  HAL_GPIO_WritePin(Led_b2_GPIO_Port, Led_b2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c2_GPIO_Port, Led_c2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d2_GPIO_Port, Led_d2_Pin, SET);
		  HAL_GPIO_WritePin(Led_e2_GPIO_Port, Led_e2_Pin, SET);
		  HAL_GPIO_WritePin(Led_f2_GPIO_Port, Led_f2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g2_GPIO_Port, Led_g2_Pin, RESET);
		  break;
	case 5:
		  HAL_GPIO_WritePin(Led_a2_GPIO_Port, Led_a2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b2_GPIO_Port, Led_b2_Pin, SET);
		  HAL_GPIO_WritePin(Led_c2_GPIO_Port, Led_c2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d2_GPIO_Port, Led_d2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e2_GPIO_Port, Led_e2_Pin, SET);
		  HAL_GPIO_WritePin(Led_f2_GPIO_Port, Led_f2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g2_GPIO_Port, Led_g2_Pin, RESET);
		  break;
	case 6:
		  HAL_GPIO_WritePin(Led_a2_GPIO_Port, Led_a2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b2_GPIO_Port, Led_b2_Pin, SET);
		  HAL_GPIO_WritePin(Led_c2_GPIO_Port, Led_c2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d2_GPIO_Port, Led_d2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e2_GPIO_Port, Led_e2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_f2_GPIO_Port, Led_f2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g2_GPIO_Port, Led_g2_Pin, RESET);
		  break;
	case 7:
		  HAL_GPIO_WritePin(Led_a2_GPIO_Port, Led_a2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b2_GPIO_Port, Led_b2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c2_GPIO_Port, Led_c2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d2_GPIO_Port, Led_d2_Pin, SET);
		  HAL_GPIO_WritePin(Led_e2_GPIO_Port, Led_e2_Pin, SET);
		  HAL_GPIO_WritePin(Led_f2_GPIO_Port, Led_f2_Pin, SET);
		  HAL_GPIO_WritePin(Led_g2_GPIO_Port, Led_g2_Pin, SET);
		  break;
	case 8:
		  HAL_GPIO_WritePin(Led_a2_GPIO_Port, Led_a2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b2_GPIO_Port, Led_b2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c2_GPIO_Port, Led_c2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d2_GPIO_Port, Led_d2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e2_GPIO_Port, Led_e2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_f2_GPIO_Port, Led_f2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g2_GPIO_Port, Led_g2_Pin, RESET);
		  break;
	case 9:
		  HAL_GPIO_WritePin(Led_a2_GPIO_Port, Led_a2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b2_GPIO_Port, Led_b2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c2_GPIO_Port, Led_c2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d2_GPIO_Port, Led_d2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e2_GPIO_Port, Led_e2_Pin, SET);
		  HAL_GPIO_WritePin(Led_f2_GPIO_Port, Led_f2_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g2_GPIO_Port, Led_g2_Pin, RESET);
		  break;
	default:
		  break;
	}
}

void update7SEG(int index){
		switch(index){
		case 0:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			display7SEG(led_buffer[index]);
			break;
		case 1:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			display7SEG(led_buffer[index]);
			break;
		default:
			break;
		}
}

void update7SEG2(int index){
	switch(index){
	case 0:
				HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
				HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
				display7SEG2(led_buffer2[index]);
				break;
	case 1:
				HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
				HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
				display7SEG2(led_buffer2[index]);
				break;
	default:
		break;
	}
}


void updateBuffer1(int value){
	led_buffer[0] = value / 10;
	led_buffer[1] = value % 10;
}

void updateBuffer2(int value){
	led_buffer2[0] = value / 10;
	led_buffer2[1] = value % 10;
}

void clear_leds(){
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);

			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
					HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
					HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
}

void led_on(int status){
	switch(status){
	case RED_GREEN:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);

		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
		break;
	case RED_YELLOW:

				HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
				HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
				HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);

				HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
				HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
				HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
		break;
	case YELLOW_RED:
				HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
				HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
				HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);

				HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
				HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
				HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
		break;
	case GREEN_RED:
				HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
				HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
				HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);

				HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
				HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
				HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
		break;
	default:
		break;
	}
}

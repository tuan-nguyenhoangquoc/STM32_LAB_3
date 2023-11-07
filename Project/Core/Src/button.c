/*
 * button.c
 *
 *  Created on: Oct 21, 2023
 *      Author: PC
 */

#include "button.h"
#define PRESSED_TIME 2000

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int KeyReg0[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg3[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};


int TimerForKeyPress = PRESSED_TIME;


int isButton1Pressed() {
	if(button1_flag==1){
		button1_flag=0;
		return 1;
	}
	return 0;
}

void subKeyProcess(){
	button1_flag=1;
}

int isButton2Pressed() {
	if(button2_flag==1){
		button2_flag=0;
		return 1;
	}
	return 0;
}

void subKeyProcess_2(){
	button2_flag=1;
}

int isButton3Pressed() {
	if(button3_flag==1){
		button3_flag=0;
		return 1;
	}
	return 0;
}

void subKeyProcess_3(){
	button3_flag=1;
}

void getKeyInput(){
	KeyReg0[0]=KeyReg1[0];
	KeyReg1[0]=KeyReg2[0];
	KeyReg2[0]=HAL_GPIO_ReadPin(Button1_GPIO_Port,Button1_Pin);
	if((KeyReg0[0] == KeyReg1[0]) && (KeyReg1[0] == KeyReg2[0])){
		if (KeyReg3[0] != KeyReg2[0]){
			KeyReg3[0] = KeyReg2[0];
			if(KeyReg2[0] == PRESSED_STATE){
				subKeyProcess();
				TimerForKeyPress = PRESSED_TIME;
			}
		}
		else{
			TimerForKeyPress--;
			if(TimerForKeyPress <= 0){
				//TODO
				if(KeyReg2[0] == PRESSED_STATE)
					subKeyProcess();
				TimerForKeyPress = PRESSED_TIME;
			}
		}
	}

	KeyReg0[1]=KeyReg1[1];
	KeyReg1[1]=KeyReg2[1];
	KeyReg2[1]=HAL_GPIO_ReadPin(Button2_GPIO_Port,Button2_Pin);
	if((KeyReg0[1] == KeyReg1[1]) && (KeyReg1[1] == KeyReg2[1])){
		if (KeyReg3[1] != KeyReg2[1]){
			KeyReg3[1] = KeyReg2[1];
			if(KeyReg2[1] == PRESSED_STATE){
				subKeyProcess_2();
				TimerForKeyPress = PRESSED_TIME;
			}
		}
		else{
			TimerForKeyPress--;
			if(TimerForKeyPress <= 0){
				//TODO
				if(KeyReg2[1] == PRESSED_STATE)
					subKeyProcess_2();
				TimerForKeyPress = PRESSED_TIME;
			}
		}
	}

		KeyReg0[2]=KeyReg1[2];
		KeyReg1[2]=KeyReg2[2];
		KeyReg2[2]=HAL_GPIO_ReadPin(Button3_GPIO_Port,Button3_Pin);
		if((KeyReg0[2] == KeyReg1[2]) && (KeyReg1[2] == KeyReg2[2])){
			if (KeyReg3[2] != KeyReg2[2]){
				KeyReg3[2] = KeyReg2[2];
				if(KeyReg2[2] == PRESSED_STATE){
					subKeyProcess_3();
					TimerForKeyPress = PRESSED_TIME;
				}
			}
			else{
				TimerForKeyPress--;
				if(TimerForKeyPress <= 0){
					//TODO
					if(KeyReg2[2] == PRESSED_STATE)
						subKeyProcess_3();
					TimerForKeyPress = PRESSED_TIME;
				}
			}
		}
}



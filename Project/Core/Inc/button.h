/*
 * button.h
 *
 *  Created on: Oct 21, 2023
 *      Author: PC
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "software_timer.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int button1_flag;
extern int button2_flag;
extern int button3_flag;

void getKeyInput();
int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();
#endif /* INC_BUTTON_H_ */

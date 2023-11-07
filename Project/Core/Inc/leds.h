/*
 * leds.h
 *
 *  Created on: Oct 21, 2023
 *      Author: PC
 */

#ifndef INC_LEDS_H_
#define INC_LEDS_H_

extern const int MAX_LED;
extern int index_led;
extern int led_buffer[2];
extern int led_buffer2[2];

void display7SEG(int num);
void display7SEG2(int num);
void update7SEG(int index);
void update7SEG2(int index);
void updateBuffer1(int value);
void updateBuffer2(int value);
void led_on(int status);
void clear_leds();
#endif /* INC_LEDS_H_ */

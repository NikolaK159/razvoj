/*
 * output_event.h
 *
 *  Created on: Jul 12, 2023
 *      Author: milicavnogo
 */
#include <avr/io.h>
#include <stdint.h>
#ifndef OUTPUT_EVENT_H_
#define OUTPUT_EVENT_H_

void logTran(state_t state, state_t next_state);

void logTime(uint16_t mm, uint16_t ss);

void logCut();

void ledOff();

void ledOn();

void ledBlink();







#endif /* OUTPUT_EVENT_H_ */

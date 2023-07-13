/*
 * input_event.h
 *
 *  Created on: Jul 12, 2023
 *      Author: milicavnogo
 */
//u heder fajlovima se samo definisu f-je koje ce se koristiti
#ifndef INPUT_EVENT_H_
#define INPUT_EVENT_H_
#include <avr/io.h>
#include <stdint.h>


/**
 * @param c
 * @return 0
 */
uint8_t checkKeyboard(uint8_t c);



/**
 * @param t0
 * @return 0
 */
uint8_t secPass(uint32_t t0);






#endif /* INPUT_EVENT_H_ */

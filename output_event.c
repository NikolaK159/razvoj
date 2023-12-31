/*
 * output_event.c
 *
 *  Created on: Jul 12, 2023
 *      Author: milicavnogo
 */
#include <avr/io.h>
#include <stdint.h>
#include "output_event.h"
#include "usart.h"
#include "pin.h"


void logTran(state_t state, state_t next_state)
{
	usartPutString("Transaction from state");
	usartPutString(state);
	usartPutString("to");
	usartPutString(next_state);
	usartPutChar("\n");
}


void logTime(uint16_t mm, uint16_t ss)
{
	usartPutString("Time");
	usartPutString(mm);
	usartPutString(":")
	usartPutString(ss);
	usartPutChar("\n";)

}


void logCut()
{
	usartPutString("Cutting\n");

}

void ledOff()
{
	pinSetValue(PORT_B,5,LOW);
}

void ledOn()
{
	pinSetValue(PORT_B,5,HIGH);
}

void ledBlink()
{
	pinSetValue(PORT_B,5,LOW);
	delay_ms(1000);
	pinSetValue(PORT_B,5,HIGH);
}


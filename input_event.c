#include <avr/io.h>
#include <stdint.h>
#include "keypad.h"
#include "input_event.h"


uint8_t checkKeypad(uint8_t c)
{
	if (keypadScan() == 'c')
		return 1;
	else
		return 0;

}


uint8_t secPass(uint32_t t0)
{
	if(t0 == 1000)
		return 1;
	else
		return 0;

}

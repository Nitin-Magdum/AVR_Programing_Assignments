/*
 * Blinking_LED_inside_to_outside.c
 *
 * Created: 18-Jan-22 4:14:09 PM
 * Author : Nitin
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL // clock speed is 16MHz
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA=0xFF;
	while (1)
	{
		//Starting from Selecting Middle LED's
		PORTA=0b00011000; //LED A3 & A4
		//PORTA=0b00001000; //LED A4
		_delay_ms(1000);
		PORTA=0b00100100; //LED A2 & A5
		_delay_ms(1000);
		PORTA=0b01000010; //LED A1 & A6
		_delay_ms(1000);
		PORTA=0b10000001; //LED A0 & A7
		_delay_ms(1000);
	}
}




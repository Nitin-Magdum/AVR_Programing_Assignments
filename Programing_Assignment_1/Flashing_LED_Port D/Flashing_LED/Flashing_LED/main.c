/*
 * Flashing_LED.c
 *
 * Created: 18-Jan-22 2:16:48 PM
 * Author : Nitin
 */ 
#ifndef F_CPU
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{	
	DDRD=0xFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTD=0xFF;
		_delay_ms(1000);
		PORTD=0x00;
		_delay_ms(1000);
    }
}


/*
 * Running_LED_on_Port_A.c
 *
 * Created: 18-Jan-22 5:11:06 PM
 * Author : Nitin
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL 
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRA=0xFF;
	unsigned char a[8]={0x7F,0xBF,0xDF,0xEF,0xF7,0xFB,0xFD,0xFE};
		
    while (1) 
    {	int i=0;
		for(i=0;i<8;i++)
		{
			PORTA=a[i];
			_delay_ms(50);
			
		}
	}
}


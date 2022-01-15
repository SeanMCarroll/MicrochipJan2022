/*
 * blink.c
 *
 * Created: 1/15/2022 4:38:16 PM
 * Author : carrolls@trine.edu
 */ 

#include <avr/io.h>


int main(void)
{
    volatile int16_t i = 0;
    while (1) 
    {
		i += 1<<1;
		
    }
}


/*
 * Timer.c
 *
 * Created: 28.09.2021 16:05:38
 *  Author: kasparm1
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

#include "Timer.h"


void init_timer()
{
    TCCR1A = 0;
    TCCR1B = (1 << CS11) | (1 << ICES1) |(1 << ICNC1);      //Set Prescaler 8 bit / Input Capture Edge Select = Rising Edge / Set Input Capture Noise Canceler
    TIFR1 = (1 << ICF1);                                    //set Input Capture Flag
    
}

double StartTimer()
{
    sei();
    
}

ISR (PCINT0_vect)
{
   stopwatch = OCR1A; 

       
}
#include "C:/Users/Andrew/Desktop/gittt/LCD/lcd.h"

extern uint8_t units ;
extern uint8_t tens ; 
extern uint8_t hundreds ; 

void Increment (void){
		
	uint32_t input = units + 10 * tens + 100 * hundreds ;
	input ++ ;
	uint32_t spare = input ;
	units =  spare  %10;
	spare = spare / 10 ; 
	tens = spare % 10 ;
	spare = spare / 10 ;
	hundreds = spare % 10 ;
	Display () ;
} 

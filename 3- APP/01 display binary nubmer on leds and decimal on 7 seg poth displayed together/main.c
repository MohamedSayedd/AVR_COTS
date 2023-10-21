/*
 * main.c
 *
 *  Created on: Aug 14, 2021
 *      Author: C L
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include<util/delay.h>
#include "DIO_interface.h"
#include "BCD_Seven_SEG.h"
void PrintBinaryOn4Leds(int num)
{
	DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN0,GET_BIT(num,0));
	DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN1,GET_BIT(num,1));
	DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN2,GET_BIT(num,2));
	DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN3,GET_BIT(num,3));
}
void main (void)
{
	BCD_voidInit();
	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN0,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN1,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN2,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN3,DIO_u8PIN_OUTPUT);
	int counter=0;
	while(1)
	{
		for(counter=0;counter<10;counter++)
		{
			BCDSeg_voidWriteNumber(counter);
			PrintBinaryOn4Leds(counter);
			_delay_ms(700);

		}
	}
}




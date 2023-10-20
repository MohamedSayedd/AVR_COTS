/*
 * main.c
 *
 *  Created on: Aug 14, 2021
 *      Author: C L
 */
#include "STD_TYPES.h"
#include<util/delay.h>
#include "DIO_interface.h"
#include "BCD_Seven_SEG.h"

void main (void)
{
	BCD_voidInit();
	while(1)
	{
		BCDSeg_voidWriteNumber(5);
	}
}


	/*2- Test set port direction , set port value	 */
	/*DIO_u8SetPortDirection(DIO_u8PORTA,DIO_u8PORT_OUTPUT);
	while(1)
		{
	DIO_u8SetPortValue(DIO_u8PORTA,DIO_u8PORT_HIGH);
	_delay_ms(100);
	DIO_u8SetPortValue(DIO_u8PORTA,DIO_u8PORT_LOW);
	_delay_ms(100);
		}*/
/*
	//3- Test Get pin value
	  //using switch
	 //
	u8 x;
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN0,DIO_u8PIN_INPUT);
	DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN0,DIO_u8PIN_HIGH);

	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN1,DIO_u8PIN_OUTPUT);


	while(1)
	{DIO_u8GetPinValue(DIO_u8PORTA,DIO_u8PIN0,&x);
		if(x==0)
		{
			DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN1,DIO_u8PIN_HIGH);
		}
		else if(x!=0)
			DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN1,DIO_u8PIN_LOW);
	}

}*/


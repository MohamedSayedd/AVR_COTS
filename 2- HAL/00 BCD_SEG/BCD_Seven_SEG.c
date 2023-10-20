/*************************************************************************/
/*************************************************************************/
/******************     Author: mohamed Sayed     ************************/
/******************     Layer: HAL               ************************/
/******************     SWC: SEG                  ************************/
/******************     Version:1.00              ************************/
/******************     Date:20-10-2023             ************************/
/*************************************************************************/
/*************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "BCD_Seven_SEG.h"

#include "DIO_interface.h"
void BCD_voidInit(void)
{
	switch(Com_type)
		{
		case COM1: DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN3,DIO_u8PIN_OUTPUT);
				   DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN3,DIO_u8PIN_HIGH);break;
		case COM2: DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN2,DIO_u8PIN_OUTPUT);
					   DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN2,DIO_u8PIN_HIGH);break;

		case COM3: DIO_u8SetPinDirection(DIO_u8PORTB,DIO_u8PIN5,DIO_u8PIN_OUTPUT);
					   DIO_u8SetPinValue(DIO_u8PORTB,DIO_u8PIN5,DIO_u8PIN_HIGH);break;

		case COM4: DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN6,DIO_u8PIN_OUTPUT);
					   DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN6,DIO_u8PIN_HIGH);break;
		}
		DIO_u8SetPinDirection(BCD_PORT,BCD_PIN0,DIO_u8PIN_OUTPUT);
		DIO_u8SetPinDirection(BCD_PORT,BCD_PIN1,DIO_u8PIN_OUTPUT);
		DIO_u8SetPinDirection(BCD_PORT,BCD_PIN2,DIO_u8PIN_OUTPUT);
		DIO_u8SetPinDirection(BCD_PORT,BCD_PIN4,DIO_u8PIN_OUTPUT);
}

void BCDSeg_voidWriteNumber(u8 Copy_u8Number)
{
	DIO_u8SetPinValue(BCD_PORT,BCD_PIN0,GET_BIT(Copy_u8Number,0));
	DIO_u8SetPinValue(BCD_PORT,BCD_PIN1,GET_BIT(Copy_u8Number,1));
	DIO_u8SetPinValue(BCD_PORT,BCD_PIN2,GET_BIT(Copy_u8Number,2));
	DIO_u8SetPinValue(BCD_PORT,BCD_PIN4,GET_BIT(Copy_u8Number,3));
}

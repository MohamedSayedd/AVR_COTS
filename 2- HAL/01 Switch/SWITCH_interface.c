/*************************************************************************/
/*************************************************************************/
/******************     Author: mohamed Sayed     ************************/
/******************     Layer: HAL               ************************/
/******************     SWC: SWITCH                  ************************/
/******************     Version:1.00              ************************/
/******************     Date:22-10-2023            ************************/
/*************************************************************************/
/*************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "PORT_interface.h"
#include "DIO_interface.h"


u8 SWITCH_VoidInit(u8 Copy_u8SwitchPort,u8 Copy_u8SwitchPin)
{
	DIO_u8SetPinDirection(Copy_u8SwitchPort,Copy_u8SwitchPin,DIO_u8PIN_INPUT);
	DIO_u8SetPinValue(Copy_u8SwitchPort,Copy_u8SwitchPin,DIO_u8PIN_HIGH);
}
u8 Switch_u8GetSwitchStatus(u8 Copy_u8SwitchPort,u8 Copy_u8SwitchPin)
{
	u8 Local_u8GetPressed;
	Local_u8GetPressed=GET_BIT(Copy_u8SwitchPort,Copy_u8SwitchPin);
	return Local_u8GetPressed;
}



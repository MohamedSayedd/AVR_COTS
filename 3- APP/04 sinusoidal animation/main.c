#include "StdTypes.h"
#include "MemMap.h"
#include "Utils.h"
#include "DIO_Interface.h"

#include "LCD_Interface.h"




int main(void)
{
	DIO_Init();
	LCD_Init();

	int c=0;





	while(1)
	{

		for(int i=0;i<4;i++)
		{
			if(c==20)
			{
				c=0;
			}
			LCD_SetCursor(i,c);
			LCD_WriteChar('A');
			_delay_ms(500);
			LCD_ClearLoc(i,c,1);
			_delay_ms(500);
			c++;
		}
		for(int i=2;i>0;i--)
		{
			if(c==20)
			{
				c=0;
			}
			LCD_SetCursor(i,c);
			LCD_WriteChar('A');
			_delay_ms(500);
			LCD_ClearLoc(i,c,1);
			_delay_ms(500);
			c++;
		}

	}

	return 0;
}

// ISR(TIMER0_OVF_vect)
// {
// 	static u16 c=0,c2=0;
// 	c++;
// 	c2++;
// 	if(c%4000==0)
// 	{
// 		DIO_TogglePin(PINC0);
// 	}
// 	if(c%2000==0)
// 	{
// 		DIO_TogglePin(PINC1);
// 	}
// 	if(c%8000==0)
// 	{
// 		c=0;
// 	}
//
//}

// ISR(TIMER0_OVF_vect)
// {
// 	static u16 c=0;
// 	TCNT0=6;
// 	c++;
// 	if(c==20) // Toggle Every 5000 micro second
// 	{
// 		DIO_TogglePin(PINC0);
// 		c=0;
// 	}
// }


// Session 51  a measure Time

// ISR(TIMER0_OVF_vect)
// {
// 	 static u8 c=0;
// 	 c++;
// 	 TCNT0=6;
// 	 if(c%20==0)
// 	 {
// 		 DIO_TogglePin(PINC0);
// 	 }
// 	 if(c%40==0)
// 	 {
// 		 DIO_TogglePin(PINC1);
// 	 }
// 	 if(c%100==0)
// 	 {
// 		 DIO_TogglePin(PINC2);
// 	 }
// 	 if(c==200)
// 	 {
// 		 c=0;
// 	 }
// }

// b CTC Mode

// ISR(TIMER0_OC_vect)
// {
// 	DIO_TogglePin(PINC1);
// }
// ISR(TIMER0_OVF_vect)
// {
//
// 	DIO_TogglePin(PINC0);
// }

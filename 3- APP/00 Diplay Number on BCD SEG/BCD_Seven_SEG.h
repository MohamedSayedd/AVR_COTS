/*************************************************************************/
/*************************************************************************/
/******************     Author: mohamed Sayed     ************************/
/******************     Layer: HAL               ************************/
/******************     SWC: SEG                  ************************/
/******************     Version:1.00              ************************/
/******************     Date:20-10-2023             ************************/
/*************************************************************************/
/*************************************************************************/

#ifndef BCD_SEVEN_SEG_H_
#define BCD_SEVEN_SEG_H_
/*choose the right com to enable one seven segment on farise AVR KIT*/
typedef enum
{
	COM1,
	COM2,
	COM3,
	COM4
}COM_t;

/*Select the COM
 *
 * Options
 * 	1-COM1
 * 	1-COM2
 * 	1-COM3
 * 	1-COM4
 *
 * */
#define Com_type   COM1

/*Select BCD PORT ON Faris pcb kit
 * */
#define BCD_PORT    DIO_u8PORTB
/*Select BCD PINS ON Faris pcb kit
 * */
#define BCD_PIN0    DIO_u8PIN0
#define BCD_PIN1    DIO_u8PIN1
#define BCD_PIN2    DIO_u8PIN2
#define BCD_PIN4    DIO_u8PIN4

void BCD_voidInit(void);
void BCDSeg_voidWriteNumber(u8 Copy_u8Number);
#endif

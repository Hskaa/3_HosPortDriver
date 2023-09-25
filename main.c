/******************************************************************/
/******************************************************************/
/***************   		Author : Hossam Medhat		***************/
/***************   		Layer : MCAL         		***************/
/***************   		SWC : APP           		***************/
/***************   		Version : 1.00      		***************/
/******************************************************************/
/******************************************************************/

/* Include Libraries */
#include "STD_TYPES.h"

#include "util/delay.h"

/*Include MCAL */
#include "LCD_Interface.h"
#include "DIO_Interface.h"
#include "PORT_Interface.h"

int main (void){

	PORT_voidInit();

	LCD_voidInit();

	LCD_voidSendString("HOSSAM");



	while(1){

	}
}



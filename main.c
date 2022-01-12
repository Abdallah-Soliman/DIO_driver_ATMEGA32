/*
 * main.c
 *
 *  Created on: 6/ 1/ 2022
 *      Author: abdalah
 */
/********



 **********/

#include "primitive_data_types.h"


#include "DIO_interface.h"




void main(){
	DIO_SetPinDirection( PORTB ,  PIN4 , OUTPUT);
	DIO_SetPinDirection( PORTB ,  PIN2 , INPUT);
	DIO_SetPinValue(PORTB ,  PIN4 , LOW);
	 /*pull up resistor */
	DIO_SetPinValue(PORTB,PIN2,LOW);
	while(1){

            if(DIO_GetPinValue(PORTB ,PIN2) == 1)
            {
            	DIO_SetPinValue(PORTB,PIN4,HIGH);
            }
            else
            {
            	DIO_SetPinValue(PORTB,PIN4,LOW);
            }




	}
}

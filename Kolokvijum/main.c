/**
* @file main.c
* @brief unesemo koji clan trazimo, prvi clan niza i razliku i dobijamo sumu i trazeni n-ti clan aritmetickog niza
* @author Miroslav Bogdanovic
* @date 116-05-2021
* @version 1.0
*/

#include <util/delay.h>
#include "usart.h"
#include "arrays.h"

int main(){

	int16_t clan = 0;
	int16_t prvi_element = 0;
	int16_t razlika = 0;
	int16_t n = 0;
	int8_t kontrola = 0;
	int16_t str = 0;
	/*
	int8_t operand1[64] = {0};
	int8_t operand2[64] = {0};
	int8_t rezultat_niz[64] = {0};
	int rezultat = 0;
	int8_t i = 0;
	int8_t k = 0;
	int8_t duzina_izraza = 0;
	int8_t mesto_znaka = 0;*/

	usartInit(9600);
	kontrola = 0;

	while(1){

		if(kontrola == 0)
		{
			usartPutString("Unesite prvi element:\r\n");
			while(!usartAvailable());
			_delay_ms(100);

			if((prvi_element == 0) && (razlika == 0) && (n == 0)){
				usartGetString(str);
				prvi_element = str;
			}

			_delay_ms(100);
			usartPutString("Unesite razliku:\r\n");
			while(!usartAvailable());
			_delay_ms(100);

		    if((prvi_element != 0) && (razlika == 0) && (n == 0)){
		    	usartGetString(str);
		    	razlika = str;
		    }

		    _delay_ms(100);
			usartPutString("Unesite clan:\r\n");
			while(!usartAvailable());
			_delay_ms(100);

			if((prvi_element != 0) && (razlika != 0) && (n == 0)){
				usartGetString(str);
				n = str;
			}



			usartPutString("Prvi element niza: ");
			usartPutString(prvi_element);
			usartPutString(", razlika: ");
			usartPutString(razlika);
			usartPutString(", n: ");
			usartPutString(n);
			usartPutString("\r\n");

			kontrola = 1;

			clan = Element(prvi_element, razlika, n);
			Sum(prvi_element, razlika, n, 'ITERATIVE');
			usartPutString("n-ti element: ");
			usartPutString(clan);
			usartPutString("\r\n");


		}



	}
	return 0;
}



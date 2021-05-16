/*
 * arrays.c
 *
 *  Created on: 16.05.2021.
 *      Author: Miki
 */

#include "arrays.h"

int16_t Element(int16_t first_element, int16_t difference, int16_t n){

	int16_t trazeni_clan = 0;

	trazeni_clan = first_element + (n - 1) * difference;

	return trazeni_clan;

}


void Sum(int16_t first_element, int16_t difference, int16_t n, int8_t mode){

	int16_t suma = 0;
	int8_t i = 0;

	if(mode == 1){
		suma = n / 2 * (2 * first_element + (n - 1) * difference);
		usartPutString("suma_form: ");
		usartPutString(suma);
		usartPutString("\r\n");
	}
	else if(mode == 0){
		for(i = 0; i < n; i = i + 1){
			suma = suma + Element(first_element, difference, i);
		}
		usartPutString("suma_iter: ");
		usartPutString(suma);
		usartPutString("\r\n");
	}

}

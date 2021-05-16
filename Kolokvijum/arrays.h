/*
 * arrays.h
 *
 *  Created on: 16.05.2021.
 *      Author: Miki
 */

#ifndef ARRAYS_H_
#define ARRAYS_H_

#include <stdint.h>

#define ITERATIVE 0
#define FORMULA 1

/**
 * Funkcija trazi n-ti element aritmeticke progresije.
 * @param first_element upisujemo prvi element
 * @param difference upisujemo koeficijent razlike
 * @param n upisujemo koji clan trazimo
 * @return n-ti clan progresije
 */
int16_t Element(int16_t first_element, int16_t difference, int16_t n);

/**
 * Funkcija trazi sumu do n-tog clana aritmeticke progresije.
 * @param first_element upisujemo prvi element
 * @param difference upisujemo koeficijent razlike
 * @param n upisujemo koji clan trazimo
 * @param mode kazemo da li racunamo preko formule ili iterativno
 * @return suma progresije do n-tog clana
 */
void Sum(int16_t first_element, int16_t difference, int16_t n, int8_t mode);

#endif /* ARRAYS_H_ */

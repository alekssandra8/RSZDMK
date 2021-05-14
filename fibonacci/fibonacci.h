/**
 * @file	fibonacci.h
 * @brief	Funkcije za racunanje Fibonacijevih brojeva
 * @author	Aleksandra
 * @date	14-05-2021
 */

#ifndef FIBONACCI_H_
#define FIBONACCI_H_

#include <stdint.h>

/**
 * Opis: Funkcija koja implementira iterativni algoritam za računanje n-tog člana
 * Fibonačijevog niza.
 * Povratna vrednost: Vrednost n-tog člana Fibonačijevog niza.
 * @param number
 */
int32_t FibonacciIter(int8_t number);

/**
 * Opis: Funkcija koja implementira rekurzivni algoritam za računanje n-tog člana
 * Fibonačijevog niza.
 * Povratna vrednost: Vrednost n-tog člana Fibonačijevog niza.
 * @param number
 */
int32_t FibonacciRecursive(int8_t number);

#endif /* FIBONACCI_H_ */

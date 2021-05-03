/*
 * logic_utils.c
 *
 *  Created on: 24 Apr 2021
 *      Author: 38162
 */
#include "logic_utils.h"

 unsigned int SetBit(unsigned int reg, unsigned char bit_num)
 {
	 return reg |  (1 << bit_num);
 }

 unsigned int ClearBit(unsigned int reg, unsigned char bit_num)
 {
	 return reg & ~(1 << bit_num);
 }

 unsigned int ToggleBit(unsigned int reg, unsigned char bit_num)
 {
	 return reg ^ (1 << bit_num);
 }


/**
*CheckBit: vrši postavljanje bita na suprotnu vrednost od postojeće, na poziciji bit_num, u
*okviru 16-bitne promenljive reg
*Povratna vrednost: modifikovana vrednost promenljive reg
*@param reg
*@param bit_num
*@return
 */
 unsigned int CheckBit(unsigned int reg, unsigned char bit_num)
 {
	 return reg |= ~(1 << bit_num);
 }


 /**
  *BitmaskSet: vrši proveru vrednosti bita, na poziciji bit_num, u okviru 16-bitne promenljive
reg
 *Povratna vrednost: vrednost bita na datoj poziciji (0 ili 1)
 *@param reg
 *@param mask
 *@return
  */
 unsigned char BitmaskSet(unsigned char reg, unsigned char
mask)
 {
	 return reg;
 }


/**
 * BitmaskClear : vrši postavljanje grupe bita na vrednost 1, specificiranih u promenljivoj mask,
* u okviru 16-bitne promenljive reg
* Povratna vrednost: modifikovana vrednost promenljive reg
 *@param reg
 *@param mask
 *@return
 */
 unsigned char BitmaskClear(unsigned char reg, unsigned char mask)
 {
	 return 0;
 }


 /**
  * - Opis: vrši postavljanje grupe bita na vrednost 0, specificiranih u promenljivoj mask,
 u okviru 16-bitne promenljive reg
 - Povratna vrednost: modifikovana vrednost promenljive reg
  */
  unsigned int Not(unsigned int input);


 /**
  * - Opis: vrši bitsku negaciju 16-bitne promenljive input
 - Povratna vrednost: rezultat operacije
  */
  unsigned int And(unsigned int input1, unsigned int
 input2);


 /**
  * - Opis: vrši bitsku i operaciju nad 16-bitnim promenljivima input1 i input2
 - Povratna vrednost: rezultat operacije
  */
  unsigned int Or(unsigned int input1, unsigned int input2);


 /**
  * - Opis: vrši bitsku ili operaciju nad 16-bitnim promenljivima input1 i input2
 - Povratna vrednost: rezultat operacije
  */
  unsigned int Xor(unsigned int input1, unsigned int
 input2);


 /**
  * - Opis: vrši bitsku eks-ili operaciju nad 16-bitnim promenljivima input1 i input2
 - Povratna vrednost: rezultat operacije
  */
  unsigned int ShiftLeft(unsigned int input, unsigned int
 num_of_shifts);


 /**
  * - Opis: vrši pomeranje (eng. shift) ulazne promenljive input u levo za
 num_of_shifts mesta.
 - Povratna vrednost: rezultat operacije
  */
  unsigned int ShiftRight(unsigned int input, unsigned int
 num_of_shifts);


 /**
  * - Opis: vrši pomeranje (eng. shift) ulazne promenljive input u desno za
 num_of_shifts mesta.
 - Povratna vrednost: rezultat operacije
  */

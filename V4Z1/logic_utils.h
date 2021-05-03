/**
* @file logic_utils.h
* @brief Implementiranje logickih operacija nad bitima neke promenljive
* @author Aleksandra
* @date 24-04-2021
* @version 1.0
*/

#ifndef LOGIC_UTILS_H_
#define LOGIC_UTILS_H_


/**
*SetBit : vrši postavljanje bita na vrednost 1, na poziciji bit_num, u okviru 16-bitne
promenljive reg
*@param reg - 16-bitne promenljiva
*@param bit_num - pozicija na kojoj se postavlja vrednost bita na 1
*@return - modifikovana vrednost promenljive reg
*/
 unsigned int SetBit(unsigned int reg, unsigned char
bit_num);


/**
* ClearBit : vrši postavljanje bita na vrednost 0, na poziciji bit_num, u okviru 16-bitne
promenljive reg
*@param reg
*@param bit_num
*@return
 */
 unsigned int ClearBit(unsigned int reg, unsigned char
bit_num);


/**
 * ToggleBit: modifikovana vrednost promenljive reg
 * @param
 * @param
 * @return
 */
 unsigned int ToggleBit(unsigned int reg, unsigned char
bit_num);


/**
*CheckBit: vrši postavljanje bita na suprotnu vrednost od postojeće, na poziciji bit_num, u
*okviru 16-bitne promenljive reg
*Povratna vrednost: modifikovana vrednost promenljive reg
*@param reg
*@param bit_num
*@return
 */
 unsigned int CheckBit(unsigned int reg, unsigned char
bit_num);


 /**
  *BitmaskSet: vrši proveru vrednosti bita, na poziciji bit_num, u okviru 16-bitne promenljive
reg
 *Povratna vrednost: vrednost bita na datoj poziciji (0 ili 1)
 *@param reg
 *@param mask
 *@return
  */
 unsigned char BitmaskSet(unsigned char reg, unsigned char
mask);


/**
 * BitmaskClear : vrši postavljanje grupe bita na vrednost 1, specificiranih u promenljivoj mask,
* u okviru 16-bitne promenljive reg
* Povratna vrednost: modifikovana vrednost promenljive reg
 *@param reg
 *@param mask
 *@return
 */
 unsigned char BitmaskClear(unsigned char reg, unsigned
char mask);



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

#endif /* LOGIC_UTILS_H_ */

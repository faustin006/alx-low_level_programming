#include "main.h"

/**
 * flip_bits - counts the number of bits needed to be flipped
 * @n: number
 * @m: number to be flipped to
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	 while (xor > 0)
	 {
		 bits += (xor & 1);
		 xor >>= 1;
	 }

	 return (bits);
}

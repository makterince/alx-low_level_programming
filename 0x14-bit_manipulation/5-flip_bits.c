#include "main.h"
/**
 *flip_bits - number of bits needed to flip
 *@n: parameter
 *@m: parameter
 *Return: number
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int bit;

	bit = 0;
	while (xor > 0)
	{
		bit = bit + (xor & 1);
		xor >>= 1;
	}
	return (bit);
}

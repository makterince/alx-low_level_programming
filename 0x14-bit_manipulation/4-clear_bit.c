#include "main.h"
/**
 *clear_bit - sets value of bits to zero
 *@n: parameter
 *@index: parameter
 *Return: value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}

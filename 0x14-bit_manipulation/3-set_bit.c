#include "main.h"
/**
 *set_bit - sets that value of a bit to 1 at i
 *@n: parameter
 *@index: parameter
 *Return: bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n ^ (1 << index);
	return (1);
}


#include "main.h"
/**
 *binary_to_uint - converts binary to an unsigned integer
 *@b: binary number
 *Return: number
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int bin;
	unsigned int value;

	if (b == NULL)
		return (0);
	for (bin = 0; b[bin] != '\0'; bin++)
	{
		if (b[bin] < '0' || b[bin] > '1')
			return (0);
		value = 2 * value + (b[bin] - '0');
	}
	return (value);
}

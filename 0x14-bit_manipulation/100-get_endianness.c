#include "main.h"
/**
 *get_endianness - checks endianness
 *Return: 0
 *
 *
 */
int get_endianness(void)
{
	int number;
	char *endian;

	number = 1;
	endian = (char *)&num;

	if (*endian == 1)
		return (1);
	return (0);
}

#include <stdio.h>
#include "main.h"
/**
 *create_array - creates an array of chars
 *@size: size of the arrays
 *@c: parameter
 *Return: 0
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (size == 0)
		{
			return (NULL);
		}
		return (size[i]);
	}
}

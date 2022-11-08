#include <stdio.h>
#include "main.h"
#include <stdlib.h>
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
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *) malloc(size * sizeof(c));
	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(p + i) = c;
		}
		return (p);
	}

}

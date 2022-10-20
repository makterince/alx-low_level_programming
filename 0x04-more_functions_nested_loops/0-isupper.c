#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if c is upper case
 *@c: integer
 *Return: 1 upper 0 not
 *
 */
int _isupper(int c)
{
	int c;

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

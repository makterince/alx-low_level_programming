#include <stdio.h>
#include "main.h"
/**
 *puts2 - prints every other character of a string
 *@str: parameter
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
		if (str[i] == '\0')
			break;
	}
	_putchar('\n');
}

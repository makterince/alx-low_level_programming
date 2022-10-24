#include <stdio.h>
#include "main.h"
/**
 *_puts - prints the string and ends with a new line
 *@str: parameter
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

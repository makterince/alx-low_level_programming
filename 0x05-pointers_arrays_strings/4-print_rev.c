#include <stdio.h>
#include "main.h"
/**
 *print_rev - prints string in reverse
 *@s: parameter
 *
 *
 */
void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}

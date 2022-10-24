#include <stdio.h>
#include "main.h"
/**
 *rev_string - reverses a string
 *@s: parameter
 *
 */
void rev_string(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}

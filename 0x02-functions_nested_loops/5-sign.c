#include "main.h"
/**
 *print_sign - prints signs for values gotten
 *Return:1 if greater 0: if zero -1: if lesser
 *@n: is the value checked
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

#include "main.h"
/**
 *print_last_digit - prints last digit of int
 *Return: 0 the value of last digit
 *@n:value
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}

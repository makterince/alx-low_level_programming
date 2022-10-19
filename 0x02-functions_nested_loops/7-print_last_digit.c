#include "main.h"
/**
 *print_last_digit - prints last digit of int
 *Return: k the value of last digit
 *@k: check value
 */

int print_last_digit(int k)
{
	int ld = k % 10;

	if (ld < 0)
		k *= -k;

	_putchar(ld + '0');
	return (0);
}

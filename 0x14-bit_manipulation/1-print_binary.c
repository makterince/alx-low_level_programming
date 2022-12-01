#include "main.h"
/**
 *print_binary - prints binary numbers
 *@n: numbers
 *Return: binary numbers
 *
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar(n & 1);
}

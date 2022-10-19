#include "main.h"
/**
 *print_last_digit - prints last digit of int
 *Return: k the value of last digit
 *@k: check value
 */

int print_last_digit(int k)
{
	if (k < 0)
		k = -k;
	return (k % 10);
}

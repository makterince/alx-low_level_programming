#include "main.h"
/**
 *is_prime_number - prints 1 if prime and 0 other wise returns 0
 *@n: parameter
 *Return: 1
 *
 */
int is_prime_number(int n)
{
	int i;

	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % 1 == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime_number(n, i - 1));
		}
	}
}

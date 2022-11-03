#include "main.h"

int check_if_prime(int, int);
/**
 *is_prime_number - prints 1 if prime and 0 other wise returns 0
 *@n: parameter
 *Return: 1
 *
 */
int is_prime_number(int n)
{
	return (check_if_prime(n, 1));
}

/**
 *check_if_prime - checks if n is prime
 *@n: parameter
 *@i: parameter
 *Return: 1
 */
int check_if_prime(int n, int i)
{

	if (n <= 1)
		return (0);
	if (n % i == 0 && n > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_if_prime(n, i + 1));
}

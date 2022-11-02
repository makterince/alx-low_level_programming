#include "main.h"
/**
 *factorial - gets the factorial of a num
 *@n: parameter
 *Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 && n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

#include <stdio.h>
#include "main.h"
/**
 *main - searches for function for prime
 *Return: 0
 */
int main(void)
{
	long int num, a;

	num = 612852475143;

	for (a = 2; a <= num; a++)
	{
		if (num % a == 0)
		{
			num = num / a;
			a--;
		}
	}
	printf("%ld\n", a);
	return (0);
}

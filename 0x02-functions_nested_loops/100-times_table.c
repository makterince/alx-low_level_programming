#include "main.h"
#include <stdio.h>
/**
 *print_times_table - runs a times table for n
 *@n: given interger
 *
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('0');
			printf("%d, ", i * j);
		}
		_putchar('\n');
	}
}

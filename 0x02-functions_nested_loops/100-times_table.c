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
			printf("n %d, ", i * j);
		}
	}
}

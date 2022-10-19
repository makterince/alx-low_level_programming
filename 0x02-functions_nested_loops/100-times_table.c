#include "main.h"
/**
 *print_times_table - runs a times table for n
 *@n: given interger
 *Return:0 success
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", i);
		printf('\n');
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d", i * j);
		}
		printf('\n');
	}
	return (0);
}

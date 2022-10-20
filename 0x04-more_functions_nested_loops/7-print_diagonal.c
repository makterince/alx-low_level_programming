#include "main.h"
/**
 *print_diagonal - prints a diagonal line
 *@n: number of occurence of line
 *
 */
void print_diagonal(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		_putchar('\\');
		_putchar('\n');

		if (n <= 0)
		{
			_putchar('\n');
		}
	}
}

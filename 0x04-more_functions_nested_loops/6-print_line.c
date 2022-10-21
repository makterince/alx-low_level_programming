#include "main.h"
/**
 *print_line - prints an underscore in place of a n amount of times
 *@n: number of times print should run
 *
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

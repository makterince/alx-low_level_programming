#include "main.h"
/**
 *print_triangle - prints triangle in with hashtags
 *@size: parameter
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				if (j > i + 1)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

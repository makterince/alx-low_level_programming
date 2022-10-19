#include "main.h"
/**
 *times_table - prints times table of 9 from 0
 *
 *
 */
void times_table(void)
{
	int num, multi, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');
			for (prod = 0; prod <= 9; prod++)
			{
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

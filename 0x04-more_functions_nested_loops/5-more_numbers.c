#include "main.h"
#include <stdio.h>
/**
 *more_numbers - prints 1 to 14 in 10 rows
 *
 *
 */
void more_numbers(void)
{
	int a, b, c;

	c = 48;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b <= 63; b++)
		{
			if (b > 57)
			{
				_putchar(48);

				if (c == 58)
					c = 48;
			}
			_putchar(c);
			c++;
		}

		k = 48;

		_putchar('\n');
	}
}

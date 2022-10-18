#include "main.h"
/**
 * print_alphabet_x10 -> prints alphabets in lowercase
 */
void print_alphabet_x10(void)
{
	int num;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (num = 'a'; num <= 'z'; num++)
		{
			_putchar(num);
		}
	_putchar('\n');
	}
}

#include "main.h"
/**
 * main - entry point
 * Return:0 success
 *print_alphabet - function prototype
 */
void print_alphabet(void);

int main(void)
{
	int num;

	for (num = 'a'; num <= 'z'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
	return (0);
}


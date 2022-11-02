#include "main.h"
/**
 *_puts_recursion - prints out a string
 *@s: parameter
 *Return: 0
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_putchar('\n');
}

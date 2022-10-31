#include <stdio.h>
#include "main.h"
/**
 *_memset - fills memory with constant byte
 *@s: parameter
 *@b: parameter
 *@n: amount of parameter intended
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i,

	for (i = 0; i < 10; i++)
		s[i] = b;
	for (i = 0; 1 < 10; i++)
		_putchar(s[i]);
		_putchar('\n');
	return (s);
}

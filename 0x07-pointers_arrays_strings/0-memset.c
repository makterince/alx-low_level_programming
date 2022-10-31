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

	for (i = 0; i < n; i++)
		_putchar(s[i]);
		_putchar('\n');
	return (s);
}

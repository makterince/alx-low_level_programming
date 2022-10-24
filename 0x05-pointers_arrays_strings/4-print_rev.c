#include <stdio.h>
#include "main.h"
/**
 *print_rev - prints string in reverse
 *@s: parameter
 *
 *
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int mid = len / 2;
	char temp;

	for (i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

#include "main.h"
#include <stdio.h>
/**
 *string_toupper - change low case to upper case
 *@s: parameter
 *Return: 0
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (0);
}

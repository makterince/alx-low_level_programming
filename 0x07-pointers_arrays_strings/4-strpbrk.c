#include <stdio.h>
#include "main.h"
/**
 *_strpbrk - scans for matching bytes in to strings where it first occurs
 *@s: parameter
 *@accept: parameter
 *Return: s
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return ('\0');
}

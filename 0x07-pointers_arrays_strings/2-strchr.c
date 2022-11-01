#include <stdio.h>
#include "main.h"
/**
 *_strchr - scans for a carachter
 *@s: destination parameter
 *@c: src parameter
 *Return: dest
 */
char *_strchr(char *s, char c)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < i; j++)
		{
			if (c == s[j])
			{
				s += j;
				return (s);
			}
		}
		return ('\0');
}

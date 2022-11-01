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

	i = 0;
	while (s[i])
		i++;
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

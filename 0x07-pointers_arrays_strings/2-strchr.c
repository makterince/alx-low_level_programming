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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

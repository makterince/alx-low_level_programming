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

	for (i = 0; c[i] != '\0'; i++)
	{
		c[i] = s[i];
	}
	s[i] = '\0';
	return (s);
}

#include <stdio.h>
#include "main.h"
/**
 *_strspn - scans and matches two strings
 *@s: parameter
 *@accept: parameter
 *Return: len
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			return (len);
		}
	}
	return (len);
}

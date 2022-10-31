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
	int i, j, l;

	l = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
				l++;
			}
			else
			{
				continue;
			}
		}
	}
	return (s);

}

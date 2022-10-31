#include <stdio.h>
#include "main.h"
/**
 *_strstr - finds a substring from a string
 *@haystack: parameter
 *@needle: parameter sub
 *Return: l
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
				j++;
			}
			if (needle[j] == '\0')
			{
				return (haystack + a);
			}
			a++;
		}
	}
	return ('\0');
}

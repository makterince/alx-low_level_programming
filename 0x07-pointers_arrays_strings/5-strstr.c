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
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}

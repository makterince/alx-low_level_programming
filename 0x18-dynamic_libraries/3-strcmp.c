#include "main.h"
#include <stdio.h>
/**
 *_strcmp - compares values from two strings
 *@s1: parameter
 *@s2: parameter
 *Return: 0 if strings are same or return differences in asci value
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}

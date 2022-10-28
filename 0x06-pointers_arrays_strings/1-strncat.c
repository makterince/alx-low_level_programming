#include <stdio.h>
#include "main.h"
/**
 *_strncat - concatenates two string with an n amount of character from src
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;i

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != n'\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

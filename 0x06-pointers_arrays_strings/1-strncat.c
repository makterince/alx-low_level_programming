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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] <= n; j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

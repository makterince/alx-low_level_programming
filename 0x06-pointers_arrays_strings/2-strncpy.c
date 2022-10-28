#include "main.h"
#include <stdio.h>
/**
 *_strncpy - copies what is in string dest to src
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = o;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

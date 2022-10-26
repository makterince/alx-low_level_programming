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

	if (dest == NULL)
		return (NULL);

	for (i = 0; dest[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *_strcat - concatenatthe string labled src and merges it with dest
 *@dest: destination parameter
 *@src: source parameter
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 *_strlen - tells the size of str
 *@s: parameter
 *Return: i
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 *str_concat - concatenates two strings
 *@s1: parameter
 *@s2: parameter
 *Return: void
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int size;

	p = (char *) malloc(size * (char));
	size = _strlen(k) + 1;
	k = _strcat(s1, s2);

	if (k == NULL)
	{
		_putchar('');
	}
	if (p == 0)
	{
		return (0);
	}
	else
	{
		return (NULL);
	}
}

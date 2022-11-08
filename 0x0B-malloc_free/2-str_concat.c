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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);
	p = (char *) malloc(size * (char));
	if (p == 0)
	{
		return (NULL);
	}
	_strcat(s1, s2) = p;

	return (p);
}


#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_strlen - counts length of array
 *@s: parameter
 *Return: i
 */
int _strlen(char *s)
{
	unsigned int i;

	/**
	 * this strlen is to help get the size of our parameter
	 * size in the strdup function
	 */
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *_strcpy - copies array
 *@dest: destination parameter
 *@src: source parameter
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	/**
	 * strcpy here is to help me duplicate
	 * the whats in the allocated memory of str
	 * to a new pointer variable... i hope this makes sense
	 */
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *@str: parameter
 *Return: 0
 *
 */
char *_strdup(char *str)
{
	/**
	 * declear variables
	 */
	unsigned int size;
	char *p;

	/**
	 * to get the length of str
	 */
	size = _strlen(str);
	/**
	 * Returns NULL if str = NULL
	 */
	if (str == 0)
	{
		return (NULL);
	}
	/**
	 * allocate memory for p
	 */
	p = (char *)malloc(size * sizeof(char));
	/**
	 * return null for insufficient memory orif it fails
	 */
	if (p == 0)
	{
		return (NULL);
	}
	/**
	 * to be able to return a copy of str as p
	 * copy or duplicate the memory of str(src) into p(dest)
	 */
	_strcpy(p, str);
	return (p);
}

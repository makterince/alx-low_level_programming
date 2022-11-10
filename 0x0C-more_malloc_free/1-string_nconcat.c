#include "main.h"
/**
 *string_nconcat - concatenates two strings
 *@s1: parameter dest
 *@s2: parameter src
 *@n: size of the string
 *Return: s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	if (n < (strlen(s2) + 1))
	{
		return (NULL);
	}
	else
	{
	p = (char *) malloc((n * (strlen(s1) + (strlen(s2) + 1) *
		sizeof(char))));
	if (p == NULL)
	{
		return (NULL);
	}
	}
	strcpy(p, s2);
	strncat(p, s1, n);
	return (p);
}

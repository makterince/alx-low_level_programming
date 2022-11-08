#include "main.h"
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

	size = (strlen(s1) + strlen(s2) + 1);
	p = (char *) malloc(size * sizeof(char));
	if (p == 0)
	{
		return (NULL);
	}
	p = strcat(s1, s2);
	return (p);
}


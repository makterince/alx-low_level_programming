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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, s1);
	strcat(p, s2);
	return (p);
}


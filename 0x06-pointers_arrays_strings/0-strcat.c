#include "main.h"
#include <studio.h>
/**
 *_strcat - concatenates 2 string
 *@dest: destination string
 *@src: source string
 *Return: pointer for destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			s1[i] = s2[j];
		}
		s1[i] = '\0';
	}
}

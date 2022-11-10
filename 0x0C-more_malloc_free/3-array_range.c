#include "main.h"
/**
 *array_range - creates an array of integars
 *@min: parameter
 *@max: parameter
 *Return: 0
 *
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(p) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		p[i] = min;
	return (p);
}

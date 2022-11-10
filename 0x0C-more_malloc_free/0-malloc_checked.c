#include "main.h"
/**
 *malloc_checked - checks if memory is being allocated
 *@b: parameter
 *Return: 0
 *
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

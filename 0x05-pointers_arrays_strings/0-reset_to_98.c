#include <stdio.h>
#include "main.h"
/**
 *reset_to_98 - takes pointer to int and resets it to 98
 *@n: integer parameter
 */

void reset_to_98(int *n)
{
	printf("Value of 'n': %p\n", n);
	printf("Address 0f 'n' %p\n", &n);
	*n = 98;
}

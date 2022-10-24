#include <stdio.h>
#include "main.h"
/**
 *swap_int - swaps int a for b
 *@a: parameter
 *@b: parameter
 *
 */
void swap_int(int *a, int *b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

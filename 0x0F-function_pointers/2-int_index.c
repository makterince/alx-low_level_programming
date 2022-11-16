#include "function_pointers.h"
/**
 *int_index - prints the index of first element
 *@array: parameter
 *@size: parameter
 *@cmp: parameter
 *Return: index of 1st element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

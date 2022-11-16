#include "function_pointers.h"
/**
 *array_iterator - executes a function as an array
 *@array: parameter
 *@size: parameter
 *@action: parameter
 *Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

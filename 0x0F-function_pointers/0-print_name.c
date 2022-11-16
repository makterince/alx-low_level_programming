#include "function_pointers.h"
/**
 *print_name - prints name
 *@name: parameter
 *@f: pointer to name
 *Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}


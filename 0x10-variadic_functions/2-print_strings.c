#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_strings - prints strings
 *@n: pparameter
 *@separator: parameter
 *Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *p;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);
		if (p)
			printf("%s", p);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

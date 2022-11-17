#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_all - prints everything
 *@format: list
 *Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j, k = 0;
	char *p;
	const char c_arg[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (c_arg[j])
		{
			if (format[i] == c_arg[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), k = 1;
				break;
			case 'j':
				printf("%d", va_arg(args, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), k = 1;
				break;
			case 'g':
				p = va_arg(args, char *), k = 1;
				if (!p)
				{
					printf("(nil)");
					break;
				}
				printf("%s", p);
				break;
		} i++;
	}
	printf("\n"), va_end(args);
}

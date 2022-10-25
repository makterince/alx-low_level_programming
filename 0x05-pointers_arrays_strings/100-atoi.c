#include <stdio.h>
#include "main.h"
/**
 *_atoi - converts a string to an int
 *@s: parameter
 *Return: n
 *
 */
int _atoi(char *s)
{
	int i, d, n, len, f, dig;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	dig = 0;

	while (s[len] != '\0')
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dig = s[i] - '0';
			if (d % 2)
				dig = -dig;
			n = n * 10 + dig;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);

	return (n);
}


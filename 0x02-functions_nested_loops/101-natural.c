#include "main.h"
#include <stdio.h>
/**
 *main - prints combos of five and three under 1024
 *Return:0 success
 *
 *
 */
int main(void)
{
	int i, j;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			j += i;
	}
	printf("%d\n", b);
	return (0);
}

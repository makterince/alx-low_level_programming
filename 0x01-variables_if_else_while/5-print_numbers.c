#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Return:0 success
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}

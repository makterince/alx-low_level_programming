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
		printf("%d", num);
	}
	return (0);
}

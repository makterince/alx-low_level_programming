#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Return:0 success
 */
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Return:0 success
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 * Return:0 success
 */

int main(void)
{
	int ch;
	int be;

	for (ch = 'a'; ch = 'z'; ch++)
	for (be = 'A'; be = 'Z'; be++)
		putchar(ch);
		putchar(be);
	putchar('\n');
	return (0);

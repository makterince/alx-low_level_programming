#include <stdio.h>
#include "main.h"
/**
 *main - prints out the program names when it runs
 *@argc: parameter
 *@argv: parameter
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}

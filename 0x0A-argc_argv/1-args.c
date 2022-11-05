#include <stdio.h>
#include "main.h"
/**
 *main - returns numbers of arguments passed when running prog
 *@argc: parameter
 *@argv: parameter
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

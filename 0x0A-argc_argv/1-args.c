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
	printfu("%d\n", argc);
	return (0);
}
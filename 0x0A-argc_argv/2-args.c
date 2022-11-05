#include <stdio.h>
#include "main.h"
/**
 *main - prints out all arguments passed to it
 *@argc: parameter
 *@argv: parameter
 *Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n",i, argv[i])
	}
}


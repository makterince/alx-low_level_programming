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
	int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}


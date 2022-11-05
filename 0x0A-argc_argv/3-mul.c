#include <stdio.h>
#include "main.h"
/**
 *main - prints multiplication of numbers
 *@argc: parameter
 *@argv: parameter
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		mul = atoi(argv[2])
		printf("%d\n", i * mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}


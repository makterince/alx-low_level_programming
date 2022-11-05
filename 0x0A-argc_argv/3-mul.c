#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints multiplication of numbers
 *@argc: parameter
 *@argv: parameter
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;

		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}


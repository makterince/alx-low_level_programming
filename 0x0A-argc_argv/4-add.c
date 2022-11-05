#include "main.h"
/**
 *main - adds arguments passed and checks if theyre digits
 *@argc: parameter
 *@argv: parameter
 *Return: 0 or 1
 *
 */
int main(int argc, char *argv[])
{
	int i, add, j, k, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		add = atoi(argv[k]);
		sum = sum + add;
	}
	printf("%d\n", sum);
	return (0);
}

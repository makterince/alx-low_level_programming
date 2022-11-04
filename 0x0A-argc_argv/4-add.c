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
	int i, add;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			if (argv[i] >= 48 && argv[i] <= 57)
			{
				add += argv[i];
				printf("%d\n", add);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else if (argc < 1)
	{
		printf("0\n");
	}
}

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
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%d\n", argv[i]);
			mul *= argv[i];
		}
		printf("%d\n", sum)
	}
	else
	{
		printf("Error %s\n");
		Return (1);
	}
}


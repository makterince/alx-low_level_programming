#include "main.h"
/**
 *main - prints out the program names when it runs
 *@argc: parameter
 *@argv: parameter
 *Return: 0 success
 */
int main(int argc, char argv)
{
	int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s ", argv[i]);
		}
		printf("\n");
}

#include "main.h"
/**
 *argstostr - concats all arguments passed
 *@ac: parameter
 *@av: parameter
 *Return: p
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *p;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			k++;
			j++;
		}
		i++;
	}
	k = k + ac + 1;
	p = malloc(sizeof(char) * k);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[l] = av[i][j];
			l++;
		}
		p[l] = '\n';
		l++;
	}
	return (p);
}

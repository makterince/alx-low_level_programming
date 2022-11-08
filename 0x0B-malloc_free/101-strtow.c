#include "main.h"
/**
 *word_size - gets the size9length og words)
 *@str: parameter
 *Return: j
 */
int word_size(char *str)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(str + i) && *(str + i) != ' ')
	{
		j++;
		i++;
	}
	return (j);
}

/**
 *wordcount_ - counts letters
 *@str: parameter
 *Return: k
 */
int wordcount_(char *str)
{
	int i = 0, j = 0, k = 0;

	for (i = 0; *(str + i); i++)
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		if (*(str + i) != ' ')
		{
			k++;
			i = i + word_size(str + i);
		}
	}
	return (k);
}


/**
 *strtow - splits atrings in to words
 *@str: parameter
 *Return: string
 */
char **strtow(char *str)
{
	char *p;
	int i = 0, j, k, l, m;

	if (str == '\0' || str[0] == '\0')
		return (NULL);
	j = wordcount_(str);
	if (j == 0)
		return (NULL);
	p = malloc(sizeof(char *) * (j + 1));
	if (p == NULL)
		return (NULL);
	for (l = 0; l < j; l++)
	{
		while (str[i] == ' ')
			i++;
		m = word_size(str + i);
		p[l] = malloc(sizeof(char) * (m + 1));

		if (p[l] == NULL)
		{
			for (; l >= 0; l--)
			{
				free(p[l]);
			}
			free(p);
			return (NULL);
		}
		for (k = 0; k < m; k++)
		{
			p[l][k] = str[i++];
		}
		p[l][k] = '\0';
	}
	p[l] = NULL;
	return (p);
}

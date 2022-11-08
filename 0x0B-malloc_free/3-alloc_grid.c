#include "main.h"
/**
 *alloc_grid - returns a pointer to a two dimensional array
 *@width: parameter
 *@height: parameter
 *Return: 0
 */
int **alloc_grid(int width, int height)
{
	int i, j, **loc;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	loc = malloc(sizeof(int *) * height);
	if (loc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		loc[i] = malloc(sizeof(int) * width);
		if (loc[i] == NULL)
		{
			for (i -= 1; i >= 0; i--)
			{
				free(loc[i]);
			}
			free(loc);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		loc[i][j] = 0;
	return (loc);
}

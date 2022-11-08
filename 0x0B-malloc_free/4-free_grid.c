#include "main.h"
/**
 *free_grid - frees the allocated memory to the last task
 *@height: parameter
 *@grid: parameter
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(loc[i]);
	}
	free(loc);
}

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to array, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
		grid[i] = malloc(height * sizeof(int));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

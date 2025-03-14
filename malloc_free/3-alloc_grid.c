#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the newly allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check if width or height are invalid */
	if (width <= 0 || height <= 0)
	return (NULL);

	/* Allocate memory for the array of row pointers */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	return (NULL);

	/* Allocate memory for each row and initialize elements to 0 */
	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(sizeof(int) * width);
	if (grid[i] == NULL)
	{
	/* Free previously allocated memory in case of failure */
	while (i >= 0)
	{
	free(grid[i]);
	i--;
	}
	free(grid);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	grid[i][j] = 0;
	}

	return (grid);
}

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid.
 * @grid: The 2-dimensional grid.
 * @height: The height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Free each row of the grid */
	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}

	/* Free the grid itself */
	free(grid);
}

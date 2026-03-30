#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid.
 * @grid: the 2D grid to free
 * @height: the height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Check if the grid actually exists to avoid segmenting errors */
	if (grid == NULL || height <= 0)
		return;

	/* 1. Free each row (array of integers) */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* 2. Free the pointer to the pointers (the main array) */
	free(grid);
}

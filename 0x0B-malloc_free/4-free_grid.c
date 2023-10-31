#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_grid - frees the grid created in no. 3
 * @grid: pointer to array
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

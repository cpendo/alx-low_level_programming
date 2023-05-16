#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid
 * created by alloc_grid function
 *
 * @grid: double pointer
 * @height: pointer to rows
 *
 * Return: 0 if successful
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

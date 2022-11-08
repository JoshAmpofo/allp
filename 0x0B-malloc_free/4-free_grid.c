#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array grid
 *
 * @height: height or row
 * @grid: 2D array grid
 *
 * Return: 2D array or NULL if failed to allocate memory
 */
void free_grid(int **grid, int height)
{
	int i;

	/**
	 * iterate through each element in grid
	 * free memory of row
	 * free memory of column
	 */
	for (i = 0; i < height; i++)
		free(grid[i]); /* column and rows */
	/* free entire grid */
	free(grid);
}

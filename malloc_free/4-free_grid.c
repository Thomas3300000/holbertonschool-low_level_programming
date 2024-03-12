#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid:  pointer to an array of pointers, representing two-dimensional grid
 * @height: numbers line array
 *
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL)
		return;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}

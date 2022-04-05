#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid.
 * @grid: The grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

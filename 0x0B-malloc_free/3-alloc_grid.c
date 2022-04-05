#include <stdlib.h>

/**
 * alloc_grid -  a function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 *
 * Return: Poinnter to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (--i)
				free(grid[i]);
			free(grid[0]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

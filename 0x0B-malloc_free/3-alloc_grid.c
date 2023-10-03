#include <stdlib.h>

/**
 * **alloc_grid: intializes to 0
 * @width: width of the array
 * @height: the height of the array
 *
 * Return: returns NULL if width or height is 0 or -
 */

int **alloc_grid(int width, int height);
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == (NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
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

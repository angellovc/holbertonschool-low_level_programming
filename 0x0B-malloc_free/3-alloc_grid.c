#include <stdlib.h>
/**
 *alloc_grid - make a grid
 *@width: witdh
 *@height: height of the grid
 *Return: return a grid
 */
int **alloc_grid(int width, int height)
{
	int i = 0, y = 0, **grid;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(y));
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (y = 0; y < width; y++)
			grid[i][y] = 0;
	return (grid);
}

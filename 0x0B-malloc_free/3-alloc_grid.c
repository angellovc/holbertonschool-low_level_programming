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
		return ('\0');
	grid = malloc(width * sizeof(int *));
	if (grid == '\0')
		return ('\0');
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(height * sizeof(int *));
		if (grid[i] == '\0')
			return ('\0');
	}
	for (i = 0; i < width; i++)
		for (y = 0; y < height; y++)
			grid[i][y] = 0;
	return (grid);
}

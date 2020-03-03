#include <stdlib.h>
/**
 *free_grid - release memory used by alloc_grid function
 *@grid: double pointer to release
 *@height: rows of the double pointer
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

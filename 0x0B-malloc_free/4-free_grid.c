#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a 2 dimensional array
 * @grid: a pointer to the grid to be freed
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != 0  || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}

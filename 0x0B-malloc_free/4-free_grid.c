#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2d grid
 * @height: input
 * @grid: 2d grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

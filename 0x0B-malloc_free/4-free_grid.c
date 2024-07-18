#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This function frees a 2 dimensional grid
 *
 * @grid: This is the 2D grid to free
 * @height: This is the height of the grid
 */

void free_grid(int **grid, int height)
{
	int idx;

	if (dagrid == NULL || height <= 0)
	return;

	for (idx = 0; idx < height; idx++)
	{
	free(dagrid[idx]);
	}

	free(dagrid);
}

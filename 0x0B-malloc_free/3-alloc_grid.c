#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This function returns a pointer to a 2 dimensional
 * array of integer
 *
 * @width: This is the width of the grid
 * @height: This is the height of the grid
 *
 * Return: The pointer to 2D array, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **dagrid;
	int idx1, idx2;

	if (width <= 0 || height <= 0)
		return (NULL);

	dagrid = malloc(sizeof(int *) * height);
	if (dagrid == NULL)
		return (NULL);

	for (idx1 = 0; idx1 < height; idx1++)
	{
		grid[idx1] = malloc(sizeof(int) * width);
		if (grid[idx1] == NULL)
		{
		for (idx2 = 0; idx2 < idx1; idx2++)
			free(dagrid[j]);
			free(dagrid);
		return (NULL);
		}

		for (idx2 = 0; idx2 < width; idx2++)
			grid[idx1][idx2] = 0;
	}

	return (dagrid);
}

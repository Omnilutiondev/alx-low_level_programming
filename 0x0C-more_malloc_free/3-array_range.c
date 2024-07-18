#include "main.h"
#include <stdlib.h>

/**
 * array_range - This function creates an array of integers using malloc
 *
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: The pointer to the newly created array, or NULL
 */

int *array_range(int min, int max)
{
	int *ary;
	int idx, d_size;

	if (min > max)
	return (NULL);

	d_size = max - min + 1;
	ary = malloc(sizeof(int) * d_size);

	if (ary == NULL)
	return (NULL);

	for (idx = 0; idx < d_size; idx++)
	ary[idx] = min + idx;

	return (ary);
}

#include "search_algos.h"

/**
 * binary_search - This function searches for a value in a sorted array
 * of integers by using a Binary search algorithm
 *
 * @array: This is the pointer to the first element of the array
 * @size: This is the number of elements within the array
 * @value: the value to be searched for
 *
 * Return: index where value is stored
 */
int binary_search(int *array, size_t size, int value)
{
	size_t idx, lf, rt;

	if (array == NULL)
		return (-1);

	for (lf = 0, rt = size - 1; rt >= lf;)
	{
		printf("Searching in array: ");
		for (idx = lf; idx < rt; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);

		idx = lf + (rt - lf) / 2;
		if (array[idx] == value)
			return (idx);
		if (array[idx] > value)
			rt = idx - 1;
		else
			lf = idx + 1;
	}

	return (-1);
}

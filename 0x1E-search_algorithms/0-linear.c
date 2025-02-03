#include "search_algos.h"

/**
 * linear_search - This function searches for a value in an array of integers
 * using the linear search algorithm
 *
 * @array: This is a pointer to the first element of the array to be searched
 * @size: the number of elements within the array
 * @value: the value to be search for
 *
 * Return: the first index where the value is stored
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}

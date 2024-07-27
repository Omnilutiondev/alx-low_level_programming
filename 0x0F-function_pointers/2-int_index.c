#include "function_pointers.h"

/**
 * int_index - This function searches for an integer in an array
 *
 * @array: This is the pointer to the integer array
 * @size: This is the number of elements in the array
 * @cmp: This is the pointer to the comparison function
 *
 * Return: Index of the first matching element, or -1 if none or invalid
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]) != 0)
			return (idx);
	}

	return (-1);
}

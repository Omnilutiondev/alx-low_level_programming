#include "function_pointers.h"

/**
 * array_iterator - This function executes a function on
 * each element of an array
 *
 * @array: This is the pointer to the integer array
 * @size: This is the size of the array
 * @action: This is the pointer to the function to be executed on each element
 *
 * Description: This function applies the given action function to each
 * element inside the array. If array or action is NULL, it does nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int idx = 0;
	
	if (array != NULL || action != NULL || size > 0)
	{
		while (idx < size)
		{
			action(array[idx]);
			idx++;
		}
	}
}

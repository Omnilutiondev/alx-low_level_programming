#include "main.h"
#include <stdlib.h>

/**
 * _realloc - This function reallocates a memory block using malloc and free
 *
 * @ptr: This is the pointer to the memory previously allocated
 * @old_size: This is the size of the allocated space for ptr
 * @new_size: This is the new size of the new memory block
 *
 * Return: The pointer to the newly allocated memory, or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_potr;
	unsigned int idx, minm_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_potr = malloc(new_size);
	if (new_potr == NULL)
		return (NULL);

	minm_size = (old_size < new_size) ? old_size : new_size;
	for (idx = 0; idx < minm_size; idx++)
		new_potr[idx] = ((char *)ptr)[idx];

	free(ptr);
	return (new_potr);
}

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - This function allocates memory for an array using malloc
 *
 *  @nmemb: This is the number of elements
 *  @size: This is the size of each element
 *
 *  Return: The pointer to the allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *potr;
	unsigned int total_size, idx;
	char *tempr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	potr = malloc(total_size);

	if (potr == NULL)
		return (NULL);

	tempr = potr;
	for (idx = 0; idx < total_size; idx++)
		tempr[idx] = 0;

	return (potr);
}

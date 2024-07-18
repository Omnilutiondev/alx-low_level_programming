#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This function allocates memory using malloc
 *
 * @b: The number of bytes to allocate
 *
 * Return: The pointer to the allocated memory
 * if malloc fails, terminates process with 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

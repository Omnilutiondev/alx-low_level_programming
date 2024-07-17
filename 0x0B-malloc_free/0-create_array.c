#include <stdlib.h>

/**
 * create_array - This function creates an array of chars
 *		and initializes it with a specific char
 *
 * @size: This is the size of the array to create
 * @c: This the char to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int idx;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		array[idx] = c;

	return (arr);
}

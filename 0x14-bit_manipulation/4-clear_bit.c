#include "main.h"

/**
 * clear_bit - This function sets the value of a bit to 0
 * at a specific index
 *
 * @n: The pointer to the unsigned long int
 * @index: The index of the bit
 *
 * Return: 1 if successful, -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int idx;

	if (index > 63)
		return (-1);

	idx = 1 << index;
	
	if (*n & idx)
		*n ^= idx;

	return (1);
}

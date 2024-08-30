#include "main.h"

/**
 * set_bit - This function sets the value of a bit to 1
 * at a given index
 *
 * @n: The pointer of an unsigned long int
 * @index: The index of the bit
 *
 * Return: 1 if successful, -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int idx;

	if (index > 63)
		return (-1);

	idx = 1 << index;
	*n = (*n | idx);

	return (1);
}

#include "main.h"

/** get_bit - This function returns the value of a bit at a given index
 *
 * @n: The unsigned long int input
 * @index: The index of the bit
 *
 * Return: The value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}

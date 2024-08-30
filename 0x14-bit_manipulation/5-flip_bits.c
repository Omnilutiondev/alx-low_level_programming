#include "main.h"

/**
 * flip_bits - This function returns the number of bits that would
 * be needed to flip to get from one number to another
 *
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int dabits;

	for (dabits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			dabits++;
	}

	return (dabits);
}

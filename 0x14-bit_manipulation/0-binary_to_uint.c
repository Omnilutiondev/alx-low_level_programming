#include "main.h"

/**
 * binary_to_unit - This is a function that converts
 * a binary number to an unsigned int
 *
 * @b: The pointer to the string of chars with binary nums
 *
 * Return: The converted output
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int lent;
	size_t idx = 0;
	size_t jdx = 0;
	size_t sim = 0;
	size_t plw = 1;
	int bin = 2;

	if (b == NULL)
		return (0);
	for (lent = 0; b[lent] != '\0'; lent++)
		;
	if (lent == 1 && (b[0] == '0' || b[0] == '1'))
			return (b[0] - 48);
	for (idx = 0; b[idx] != '\0'; idx++)
	{
	if (b[idx] != '0' && b[idx] != '1')
	return (0);
	for (jdx = lent - 1; jdx > 0; jdx--)
	plw = plw * bin;
	sim = sim + (plw * (b[idx] - 48));
	lent--;
	plw = 1;
	}
	return (sim);
}

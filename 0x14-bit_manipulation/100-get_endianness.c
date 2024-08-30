#include "main.h"

/**
 * get_endianness - This function checks for edianness
 *
 * Return: 0 if there is a big edian, 1 if it is small
 */

int get_endianness(void)
{
	unsigned int idx;
	char *cc;

	idx = 1;
	cc = (char *) &idx;

	return ((int)*cc);
}

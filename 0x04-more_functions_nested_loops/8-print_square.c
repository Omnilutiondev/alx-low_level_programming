#include "main.h"

/**
 * print_square - prints square with value #
 *
 * @size: number of the # square
 */

void print_square(int size)
{
	int e, f;

	if (size > 0)
	{
	for (e = 0; e < size; e++)
	{
	for (f = 0; f < size; f++)
	{
	_putchar('#');
	}
	}
	}
	else
	{
	_putchar('\n');
	}
}

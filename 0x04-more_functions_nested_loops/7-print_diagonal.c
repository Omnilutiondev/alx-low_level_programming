#include "main.h"

/**
 * print_diagonal - Print each character with an additional space on a new line
 *
 * @n: number of inputs
 */

void print_diagonal(int n)
{
	int c, d;

	for (c = 0; c < n; c++)
	{
		if (n > 1)
		for (d = 0; d < c; d++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
	_putchar('\n');
	}
}

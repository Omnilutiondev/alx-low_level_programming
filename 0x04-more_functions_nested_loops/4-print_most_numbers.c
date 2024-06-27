#include "main.h"

/**
 * print_most_numbers - Print numbers 0 to 9 
 * followed by a new line
 * exclude 2 and 4
 */

void print_most_numbers(void)
{
	int nmb;

	for (nmb = 0; nmb <= 9; nmb++)
	{
	if (nmb != 2 && num != 4)
	{
	_putchar(nmb + '0');
	}
	}
	_putchar('\n');
}

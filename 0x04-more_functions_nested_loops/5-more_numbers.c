#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14 on a new line
 */
void more_numbers(void)
{
	int e; f;

	for (e = 0; e <= 9; e++)
	{
	for (f = 0; f <= 14; f++)
	{
	if (f >= 10)
	{
		_putchar((f / 10) + '0');
	}
	_putchar((f % 10) + '0');
	}
	_putchar('\n');
	}
}

#include "main.h"

/**
 * more_numbers - Print 10 times for numbers 0 through to 14
 * Return: 10 times of the numbers generated
 */

void more_numbers(void)

{
	int a, b;

	for (a = 0; a < 10; a++)
	{
	for (b = 0; b <= 14; b++)
	{
	if (b > 9)
	{
	_putchar((b / 10) + '0');
	}
	_putchar((b % 10) + '0');
	}
	_putchar('\n');
	}
}

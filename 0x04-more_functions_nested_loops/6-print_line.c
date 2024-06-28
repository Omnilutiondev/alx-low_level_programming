#include "main.h"

/**
 * print_line - Outputs an underscore according in place of a number
 * @n: The numbers to be outputted
 * Return: empty
 */

void print_line(int n)

{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n > 0)
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_line - Outputs an underscore according in place of a number
 * @n: The numbers to be outputted
 * Return: empty
 */

void print_line(int n)

{
	int a;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	_putchar(90);
	}
	_putchar('\n');
	}
}

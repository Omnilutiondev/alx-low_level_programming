#include "main.h"

/**
 * print_line - Print underscores for the number an integer reps
 * @n: input the integer
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
		_putchar('_');
		}
	}
	putchar('\n');
}

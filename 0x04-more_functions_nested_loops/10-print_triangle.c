#include "main.h"

/**
 * print_triangle - Prints a triangle of squares based on the parameters
 * @size: The size of each of the square triangles
 * Return: empty
 */

void print_triangle(int size)

{

	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b--)
			{
				_putchar(32);
			}
			for (c = 0; c <= a; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - This function returns x raised to the power of y
 *
 * @x: This the base number
 * @y: This the exponent
 *
 * Return: The result of x^y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

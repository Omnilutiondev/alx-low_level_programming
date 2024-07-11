#include "main.h"
#include <stdio.h>

/**
 * factorial - This is a function that returns the factorial of a given number
 *
 * @n: This the number to calculate the factorial of
 *
 * Return: The factorial of n, or -1 if n is negative
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	
	if (n == 0)
		return (1);
	
	return (n * factorial(n - 1));
}

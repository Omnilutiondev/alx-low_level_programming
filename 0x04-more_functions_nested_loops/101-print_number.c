#include "main.h"
#include <stdio.h>

/**
 * print_number - Print an integer
 * @n: The integer to be printed
 * Return: Nothing!
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
	n *= -1;
	i = n;
	_putchar('-');
	}
	i /= 10;
	if (i != 0)
	print_number(i);
	_putchar((unsigned int) n % 10 + '0');
}

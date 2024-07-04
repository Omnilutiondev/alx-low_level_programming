#include "main.h"
#include <stdio.h>

/**
 * print_number - This is a function that prints an integer
 *
 * @n: This the integer to be printed
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	unsigned int divi = n;

	if (n < 0)
	{
	_putchar('-');
	divi = -divi;
	}

	if ((divi / 10) > 0)
	print_number(divi / 10);
	_putchar((divi % 10) + '0';
}

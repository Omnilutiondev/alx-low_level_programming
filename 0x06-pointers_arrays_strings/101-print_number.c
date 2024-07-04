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
	int divi, digt;
	int is_ive = 0;

	if (n == 0)
	{
	_putchar('0');
	return;
	}
	if (n < 0)
	{
	is_ive = 1;
	_putchar('-');
	n = -n;
	}

	divi = 1;
	while (n / divi >= 10)
	divi *= 10;

	if (is_ive)
	_putchar('_');
	while (divi != 0)
	{
	digt = (n / divi) % 10;
	_putchar(digt + '0');
	divi /= 10;
	}
}

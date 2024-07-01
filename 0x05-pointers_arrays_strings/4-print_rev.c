#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints the string in reverse
 *
 * @s: The string pointer
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int asimov_reversed;

	for (asimov_reversed = 0; str[asimov_reversed] != '\0'; asimov_reversed--)
	{
		_putchar(str[asimov_reversed]);
	}
	_putchar('\n');
}

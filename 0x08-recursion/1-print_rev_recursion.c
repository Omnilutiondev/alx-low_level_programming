#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - This function prints a string in reverse
 *
 * @s: The string to be printed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	write(1, s, 1);
}

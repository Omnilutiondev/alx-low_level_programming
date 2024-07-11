#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - This function prints a string in reverse
 *
 * @s: This is the string to be printed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}

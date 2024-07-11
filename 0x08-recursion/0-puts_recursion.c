#include "main.h"

/**
 * _puts_recursion - This function prints a string followed by a new line
 *
 * @s: This is the string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	if (*s == '\0')
	{
		_putchar('\n');
	}
}

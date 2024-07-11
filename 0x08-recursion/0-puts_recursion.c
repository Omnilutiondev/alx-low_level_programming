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
		write(1, "\n", 1);
		return;
	}

	write(1, s, 1);
	_puts_recursion(s + 1);
}

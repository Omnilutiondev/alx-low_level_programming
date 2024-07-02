#include "main.h"
#include <stdio.h>

/**
 * puts_half - Print half of the chars in a string
 *
 * @str: The string with the chars to print
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int string_1 = 0;
	int string_2, c;

	while (str[string_1] != '\0')
	{
	string_1++;
	}
	string_2 = (string_1 - 1) / 2;

	for (c = (string_2 + 1); c < string_1; c++)
	{
	_putchar(str[c]);
	}
	_putchar('\n');
}

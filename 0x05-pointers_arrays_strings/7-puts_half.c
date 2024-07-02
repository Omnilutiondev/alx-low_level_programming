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
	int string_2;

	while (str[string_2] != '\0')
	{
	string_2++;
	}
	if (string_2 % == 1)
	{
	string_2 = (string_1 - 1) / 2;
	string_2 += 1;
	}

	else
	{
	string_2 = string_1 / 2;
	}

	for (; string_2 < string_1; string_2++)
	{
	_putchar(str[string_2]);
	}
	_putchar('\n');
}

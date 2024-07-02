#include "main.h"

/**
 * puts2 - Print the characters of a str from a the first char on \n
 *
 * @str: The string itself
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int string_1;
	int string_2 = 0;

	while (str[string_2] != '\0')
	{
	string_2++;
	}

	for (string_1 = 0; string_1 < string_2; string_1 += 2)
	{
	_putchar(str[string_1]);
	}
	_putchar('\n');
}

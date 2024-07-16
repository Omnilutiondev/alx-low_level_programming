#include "main.h"
#include <stdio.h>

/**
 * _puts - Creates a function followed by a new line to stdout
 *
 * @str: Is the string of characters
 *
 * Description: Check the code for the string and print using put
 *
 * Return: The string of characters
 */
void _puts(char *str)
{
	int asimov;

	for (asimov = 0; str[asimov] != '\0'; asimov++)
	{
	_putchar(str[asimov]);
	}
	_putchar('\n');
}

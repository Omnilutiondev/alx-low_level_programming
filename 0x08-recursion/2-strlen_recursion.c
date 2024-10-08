#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - This function returns the length of a string
 *
 * @s: This the string to calculate the length of
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}

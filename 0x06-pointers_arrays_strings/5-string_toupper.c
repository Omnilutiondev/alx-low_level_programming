#include "main.h"
#include <stdio.h>

/**
 * string_toupper - This function swaps lowercase chars to uppercase
 *
 * @str: This is the string to be changed
 *
 * Return: The pointer to the modified string
 */

char *string_toupper(char *str)
{
	int lU = 0;

	while (str[lU] != '\0')
	{
		if (str[lU] >= 'a' && str[lU] <= 'z')
		{
			str[lU] = str[lU] - 32;
		}
		lU++;
	}

	return (str);
}

#include "main.h"
#include <stdio.h>

/**
 * rev_string - This function reverses the entire string
 *
 * @s: Are the characters in the string
 *
 * Return: The reversed character string
 */

void rev_string(char *s)
{
	char rev_loohcs;

	rev_loohcs = 0;

	for (rev_loohcs = 0; s[rev_loohcs] != '\0'; rev_loohcs--)
	{
	_putchar(s[rev_loohcs]);
	}
	_putchar('\n');
}


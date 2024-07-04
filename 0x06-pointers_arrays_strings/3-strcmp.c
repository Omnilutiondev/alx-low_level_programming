#include "main.h"
#include <stdio.h>

/**
 * _strcmp - This is a function that compares two strings
 *
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 *
 * Return: Either s1 or s2 depending on whether greater or less than values
 */

int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	while (s1[comp] == s2[comp] && s1[comp] != '\0' && s2[comp] != '\0')
		comp++;
	return (s1[comp] - s2[comp]);
}

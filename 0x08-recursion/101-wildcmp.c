#include "main.h"
#include <stdio.h>

/**
 * wildcmp - This function compares two strings, allowing for a wildcard *
 *
 * @s1: This the first string to compare
 * @s2: This the second string to compare (may contain wildcards)
 *
 * Return: 1 if strings can be considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && * (s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	return(0);
}

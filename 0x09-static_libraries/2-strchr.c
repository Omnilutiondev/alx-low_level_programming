#include "main.h"
#include <stdio.h>

/**
 * _strchr - This function locates a character within a string
 *
 * @s: This is the string to be searched
 * @c: This the character to be found
 *
 * Return: The character or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
	}

	if (c == '\0')
	return (s);

	return (NULL);
}

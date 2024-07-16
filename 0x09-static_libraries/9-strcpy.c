#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copy the string pointed to by dest
 *
 * @src: The pointer for the first string
 * @dest: The pointer for the buffer
 *
 * Return: Character pointed by dest
 */

char *_strcpy(char *dest, char *src)
{
	int se;

	for (se = 0; src[se] != '\0'; se++)
	{
	dest[se] = src[se];
	}
	dest[se] = '\0';

	return (dest);
}

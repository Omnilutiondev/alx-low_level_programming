#include "main.h"
#include <stdio.h>

/**
 * _strncat - This is another function that concatenates two strings
 *
 * @dest: The destination string
 * @src: The string that will be appended
 * @n: The maximum number of bytes to allocated from src
 *
 * Return: Return dest always
 */

char *_strncat(char *dest, char *src, int n)
{
	int append_dest = 0;
	int lvl = 0;

	while (dest[append_dest] != '\0')
		append_dest++;

	while (src[lvl] != '\0' && i < n)
	{
		dest[append_dest + lvl] = src[lvl];
		lvl++;
	}

	dest[append_dest + lvl] = '\0';

	return (dest);
}

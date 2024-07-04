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

	while (dest[append_dest])
	lvl++;

	for (append_dest = 0; src[append_dest] && append_dest < n; append_dest++)
	dest[lvl++] = src[append_dest];

	return (dest);
}

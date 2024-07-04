#include "main.h"
#include <stdio.h>

/**
 * _strncpy - This function will copy a string
 *
 * @dest: This is the destination string
 * @src: This is the source string to append
 * @n: The number of bytes being copied
 *
 * Return: The result in string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cpstr;

	for (cpstr = 0; cpstr < n && src[cpstr] != '\0'; cpstr++)
		dest[cpstr] = src[cpstr];

	for ( ; cpstr < n; cpstr++)
		dest[cpstr] = '\0';

	return (dest);
}

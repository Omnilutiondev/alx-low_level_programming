#include "main.h"
#include <stdio.h>

/**
 * _strncpy - This function will concatenate two strings
 *
 * @dest: This is the destination string
 * @src: This is the source string to append
 *
 * Return: The result in string dest
 */

char *_strcat(char *dest, char *src)
{
	int appnd_len = 0;
	int origin = 0;

	while (dest[appnd_len] != '\0')
	appnd_len++;

	while (src[origin]) != '\0')
	{
		dest[appnd_len] = src[origin];
		appnd_len++;
		origin++;

	}
	dest[appnd_len + origin] = '\0';

	return (dest);

}

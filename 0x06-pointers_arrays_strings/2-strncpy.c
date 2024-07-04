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
        int appnd_len, lvl;

	for (appnd_len = 0; dest[appnd_len] != '\0'; appnd_len++)
	{

	}

	for (lvl = 0; src[lvl] != '\0'; lvl++)
	{
	dest[appnd_len + lvl] = src[lvl];
	}

	dest[appnd_len + lvl] = '\0';

	return (dest);
}

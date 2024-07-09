#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - This function searches a string for any of a set of bytes
 *
 * @s: This the string to be searched
 * @accept: This is the string that contains the bytes to be matched
 *
 * Return: s that matches one of the bytes in accept or NULL if none is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *act;

	while (*s)
	{
		for (act = accept; *act; act++)
		{
			if (*s == *act)
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}

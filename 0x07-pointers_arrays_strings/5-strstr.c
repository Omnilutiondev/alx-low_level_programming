#include "main.h"
#include <stdio.h>

/**
 * _strstr - This function locates a substring
 *
 * @haystack: This is the string to be searched
 * @needle: This is the substrig to be searched for
 *
 * Return: The first substring in haystack or NULL if nothing is found
 */

char *_strstr(char *haystack, char *needle)
{
	char *htk, *ndl;

	if (!*needle)
	return (haystack);

	while (*haystack)
	{
		htk = haystack;
		ndl = needle;

		while (*htk && *ndl && *htk == *ndl)
		{
			htk++;
			ndl++;
		}

		if (!*ndl)
		return (haystack);

		haystack++;
	}

	return (NULL);
}

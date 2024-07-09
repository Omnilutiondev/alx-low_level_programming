#include "main.h"
#include <stdio.h>

/**
 * _strspn - This function gets the length of a prefix substring
 *
 * @s: This is the string to be measured
 * @accept: This is the string containing the characters to be matched
 *
 * Return: The number of bytes in s which come from only accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int lnth = 0;
	int seen;
	char *act;

	while (*s)
	{
		seen = 0;
		for (act = accept; *act; act++)
		{
			if (*s == *act)
		{
			seen = 1;
			break;
		}
		}

		if (!seen)
		break;

		lnth++;
		s++;
	}

	return (lnth);
}

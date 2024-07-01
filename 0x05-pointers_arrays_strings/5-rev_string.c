#include "main.h"
#include <stdio.h>

/**
 * rev_string - This function reverses the entire string
 *
 * @s: Are the characters in the string
 *
 * Return: The reversed character string
 */

void rev_string(char *s)
{
	int word, sch;
	char rev_loohcs;

	word = 0;

	while (s[word] != '\0')
	{
		word++;
	}

	for (sch = 0; sch < word / 2; sch++)
	{
		rev_loohcs = s[sch];
		s[sch] = s[word - sch - 1];
		s[word - sch - 1] = rev_loohcs;
	}
}


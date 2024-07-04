#include "main.h"
#include <stdio.h>

/**
 * cap_string - This function capitalizes all the words in a string
 *
 * @str: This is the string to be capitalized
 *
 * Return: The pointer string being modified
 */

char *cap_string(char *str)
{
	int word_str = 0;
	int capital_word = 1;

	while (str[word_str] != '\0')
	{
	if (capital_word && str[word_str] >= 'a' && str[word_str] <= 'z')
	{
	str[word_str] -= 32;
	}

	capital_word = 0;

	switch (str[word_str])
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
		capital_word = 1;
		break;
	}

	word_str++;
	}

	return (str);
}

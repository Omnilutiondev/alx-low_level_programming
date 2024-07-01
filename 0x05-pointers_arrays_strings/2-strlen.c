#include "main.h"
#include <stdio.h>

/**
 *_strlen - Calculate the total length of a string
 *
 * @s:  is the string to calculate
 *
 * Description: Count the number of characters in the input string from 0
 *
 * Return: (0)
 */
int _strlen(char *s)
{
	int str_total_len;

	str_total_len = 0;
	while (s[str_total_len] != '\0')
	{
	total_len++;
	}

	return (str_total_len);
}

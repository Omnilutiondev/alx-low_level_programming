#include "main.h"
#include <stdio.h>

/**
 * string_recursion - This function returns the length of a string
 *
 * @strl: This the string to calculate the length of
 *
 * Return: The length of the string
 */

int string_recursion(char *strl)
{
	if (*strl == '\0')
		return (0);
	return (1 + string_recursion(strl + 1));
}

/**
 * precursor_palindrome - This function to checks for a palindrome
 *
 * @str: This the string to check
 * @start_idx: This the starting index
 * @end_idx: This the ending index
 *
 * Return: 1 if palindrome, 0 if not
 */

int precursor_palindrome(char *str, int start_idx, int end_idx)
{
	if (start_idx >= end_idx)
		return (1);
	if (str[start_idx] != str[end_idx])
		return (0);
	return (precursor_palindrome(str, start_idx + 1, end_idx - 1));
}

/**
 * is_palindrome - This function verifies if a string is a palindrome
 *
 * @s: This the string to check
 *
 * Return: 1 if the string is a verified palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int lnt;

	lnt = string_recursion(s);
	return (precursor_palindrome(s, 0, lnt - 1));
}

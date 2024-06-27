#include "main.h"

/**
 * 1-isdigit - Checks for digits from 0 through to 9
 * @c: The digit is checked
 * Return: 1 if the character is a digit or 0 for anything else
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}

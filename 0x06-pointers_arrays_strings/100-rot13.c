#include "main.h"
#include <stdio.h>

/**
 * rot13 - This encodes a string using the ROT13 cipher
 *
 * @str: This is the string to be encoded
 *
 * Return: The pointer to the encoded string
 */

char *rot13(char *str)
{
	int index, jamex;
	char beta[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; str[index] != '\0'; index++)
	{
	for (jamex = 0; beta[jamex] != '\0'; jamex++)
	{
	if (str[index] == beta[jamex])
	{
	str[index] = rot13[jamex];
	break;
	}
	}
	}

	return (str);
}

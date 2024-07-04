#include "main.h"
#include <stdio.h>

/**
 * leet - This function encodes a string into two arrays in 1337
 *
 * @str: This is the string that will be encoded
 *
 * Return: This is the pointer to the encoded string
 */

char *leet(char *str)
{
	int ray_1, ray_2;
	char str_letters[] = "aAeEoOtTlL";
	char str_numbers[] = "4433007711";

	for (ray_1 = 0; str[ray_1] != '\0'; ray_1++)
	{
	for (ray_2 = 0; ray_2 < 10; ray_2++)
	{
	if (str[ray_1] == str_letters[ray_2])
	{
	str[ray_1] = str_numbers[ray_2];
	break;
	}
	}
	}

	return (str);
}

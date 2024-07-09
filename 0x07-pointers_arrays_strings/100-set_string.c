#include "main.h"
#include <stdio.h>

/**
 * set_string - This function sets the value of a pointer to a char
 *
 * @s: The pointer to pointer that points to the char
 * @to: The pointer to the char
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}

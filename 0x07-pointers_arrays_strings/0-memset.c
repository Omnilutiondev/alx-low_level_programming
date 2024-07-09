#include "main.h"
#include <stdio.h>

/**
 * _memset() - This function fills the memory area with a constant byte
 *
 * @s: This is the pointer to the target memory area
 * @b: This is the constant byte to fill the memory area with
 * @n: This is the number of bytes to fill
 *
 * Return: s the pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mem_byte;

	for (mem_byte = 0; mem_byte < n; mem_byte++)
	{
		s[mem_byte] = b;
	}
	return (s);
}

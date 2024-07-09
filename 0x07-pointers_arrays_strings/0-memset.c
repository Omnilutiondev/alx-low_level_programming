#include "main.h"
#include <stdio.h>

/**
 * _memset() - This function fills the fills the first byste of the memory area appointed by s with the constant byte present in b
 *
 * @s: This is the pointer to the memory area to be filled
 * @b: This is the constant byte to fill the target memory area
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

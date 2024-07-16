#include "main.h"
#include <stdio.h>

/**
 * _memcpy - This function copies the memory area
 *
 * @dest: The pointer to the destination memory area
 * @src: The pointer to the source memory area
 * @n: The number of bytes to be copied
 *
 * Return: (Dest) The pointer to the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mem_cpy;

	for (mem_cpy = 0; mem_cpy < n; mem_cpy++)
	{
		dest[mem_cpy] = src[mem_cpy];
	}
	return (dest);
}

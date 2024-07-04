#include "main.h"
#include <stdio.h>

/**
 * reverse_array - This function reverses the contents of an array of integers
 *
 * @a: This is the pointer to the array of integers
 * @n: This is the number of elements within the array
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int rev, stack;

	for (rev = 0; rev < n / 2; rev++)
	{
	stack = a[rev];
	a[rev] = a[n - 1 - rev];
	a[n - 1 - rev] = stack;
	}
}

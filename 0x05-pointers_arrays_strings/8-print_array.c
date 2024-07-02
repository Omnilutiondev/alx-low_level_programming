#include "main.h"
#include <stdio.h>

/**
 * print_array - The code prints the integers held in an  array
 *
 * @a: The array of integers
 * @n: The number of elements to be printed
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int alx;

	for (alx = 0; alx < n; alx++)
	{
	printf("%d", a[alx]);

	if (alx != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}

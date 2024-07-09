#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - This function prints the sum of a square matrix
 *
 * @a: This is the pointer to the start of the matrix
 * @size: This is the size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int square_i;
	int diag_sum1 = 0;
	int diag_sum2 = 0;

	for (square_i = 0; square_i < size; square_i++)
	{
		diag_sum1 += a[square_i * size + square_i];
		diag_sum2 += a[square_i * size + (size - 1 - square_i)];
	}

	printf("%d, %d\n", diag_sum1, diag_sum2);
}

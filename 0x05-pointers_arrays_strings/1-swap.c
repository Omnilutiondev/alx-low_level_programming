#include "main.h"

/**
 * swap_int - this is  function to swap two integers
 *
 * @a: is pointer 1
 * @b: is pointer 2
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int empty;
	int *v = &empty;

	v = a;
	a = b;
	b = v;
}

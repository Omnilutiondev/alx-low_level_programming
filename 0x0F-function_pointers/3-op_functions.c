#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - This returns the sum of a and b
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: Sum of and b
 */

int op_add(int a, int b);
{
	return (a + b);
}

/**
 * op_sub - This returns the difference of a and b
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: Subtraction of a and b
 */

int op_sub(int a, int b);
{
	return (a - b);
}

/**
 * op_mul - This returns the product of a and b
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: Multiplication of a and b
 */

int op_mul(int a, int b);
{
	return (a * b);
}

/**
 * op_div - This returns the division of a and b
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: Division of a and b
 */

int op_div(int a, int b);
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}

/**
 * op_mod - This returns the remainder of the division of a and b
 * @a: the first integer
 * @b: the second integer
 *
 * Return: Remainder or O
 */

int op_mod(int a, int b);
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}

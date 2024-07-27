#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function returns the sum of all its parameters
 *
 * @n: This is the number of parameters
 * @...: This is the variable number of parameters to sum
 *
 * Return: Sum of all parameters, or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int idx;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (idx = 0; idx < n; idx++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}

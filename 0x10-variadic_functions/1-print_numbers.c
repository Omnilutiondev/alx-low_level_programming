#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - This function prints numbers followed by a new line
 *
 * @separator: This is the string to be printed between numbers (or NULL)
 * @n: This is the number of integers passed to the function
 * @...: This is the variable number of integers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int idx;

	va_start(args, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && idx < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}

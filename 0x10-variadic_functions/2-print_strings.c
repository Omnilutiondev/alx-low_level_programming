#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - This function prints strings, followed by a new line.
 *
 * @separator: This is the string to be printed between the strings.
 * @n: This is the number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int idx;

	va_start(args, n);
	for (idx = 0; idx < n; idx++)
	{
		const char *str = va_arg(args, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (idx < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}

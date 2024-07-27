#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - This function prints anything based on the format string.
 *
 * @format: This is a string containing the types of arguments
 * passed to the function.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int idx = 0;
	char *str;

	va_start(args, format);
	while (format && format[idx])
	{
		switch (format[idx])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			printf("%s", str ? str : "(nil)");
			break;
		default:
			idx++;
			continue;
		}
		if (format[idx + 1])
			printf(", ");
		idx++;
	}
	printf("\n");
	va_end(args);
}


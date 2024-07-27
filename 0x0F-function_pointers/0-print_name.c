#include "function_pointers.h"

/**
 * print_name - This function prints a name using a given function
 *
 * @name: This is the name to be printed
 * @f: This is the function pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}

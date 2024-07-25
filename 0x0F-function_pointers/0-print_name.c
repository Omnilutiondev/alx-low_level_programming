#include "function_pointer.h"
#include <stdio.h>

/**
 * print_name - This function prints a name using a given function
 *
 * @name: This is the name to be printed
 * @f: This is the function pointer to the printing function
 *
 * Description: This function uses a name and a function pointer as arguments.
 * Then calls the provided function to print the name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

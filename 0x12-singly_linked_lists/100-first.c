#include "lists.h"

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - This function executes the main()
 *
 * Return: Always void
 */
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

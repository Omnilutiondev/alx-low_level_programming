#include "lists.h"

void _newliner(void) __attribute__ ((constructor));

/**
 * _newliner - This function executes the main()
 *
 * Return: Always void
 */
void _newliner(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

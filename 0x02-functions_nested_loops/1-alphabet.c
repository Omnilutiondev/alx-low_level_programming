#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char start = 'a';
	char end = 'z';

	while (start <= end)
	{
		_putchar(start);
		start++;
	}
	
	_putchar('\n');
}

#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times in lowercase letters
 * 
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char start = 'a';
	char end = 'z';

	for (i= 0; i < 10; i++)
	{
		while (start <= end)
		{
			_putchar(start);
			start++;
		}
		start = 'a';
		_putchar('\n');
	}
}

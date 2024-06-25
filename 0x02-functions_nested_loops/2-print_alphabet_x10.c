#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase letters
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
		start = 'a'; // Will reset and start at the next iteration
		_putchar('\n'); // Will create a new line
	}
}

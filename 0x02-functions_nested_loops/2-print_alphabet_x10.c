#include "main.h"

/**
 * entry - Print the alphabet 10 times in lowercase letters
 * 
 * Return: void
 */
int main(void)
{
	print_alphabet_x10(void);
}

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

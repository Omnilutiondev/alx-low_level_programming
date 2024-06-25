#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char start = 'z';
	do
	{
		putchar(start);
		start--;
	}
	while (start >= 'a');
	putchar('\n');
	return (0);
}

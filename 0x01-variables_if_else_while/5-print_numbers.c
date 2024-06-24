#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int digit = 0; digit < 10; ++digit)
	{
		putchar('0' + digit);
	}
	putchar('\n');
	return (0);
}

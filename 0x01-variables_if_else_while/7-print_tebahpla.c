#include <stdio.h>

/**
 * main - This program prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ltr;

	for (ltr = 'z'; ltr >= 'a'; ltr--)
		putchar(ltr);

	putchar('\n');

	return (0);
}

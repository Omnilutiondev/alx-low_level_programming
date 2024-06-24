#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c; char b;

	for (c = 'a'; b = 'A'; c <= 'z'; b <= 'Z'; ++c; ++b)
		putchar(c); putchar(b);
	putchar('\n');

	return (0);
}

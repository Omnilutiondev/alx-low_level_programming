#include <stdio.h>

/**
 * main - This program prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char dgt;

	for (dgt = '0'; dgt <= 'f'; dgt++)
	{
		if ((dgt <= '9') || (dgt >= 'a'))
			putchar(dgt);
	}

	putchar('\n');

	return (0);
}

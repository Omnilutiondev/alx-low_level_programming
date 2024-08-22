#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This is the entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int idx;

	for (idx = '0'; idx <= '9'; idx++)
	{
		putchar(idx);
		if (idx != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - This is the entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int idx, pnp;

	for (idx = '0'; idx < '9'; idx++)
	{
		for (pnp = idx + 1; pnp <= '9'; pnp++)
		{
			if (pnp != idx)
			{
				putchar(idx);
				putchar(pnp);
				if (idx == '8' && pnp == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

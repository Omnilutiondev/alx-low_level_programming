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
	int pnp, qut;

	for (pnp = 0; pnp <= 98; pnp++)
	{

		for (qut = pnp + 1; qut <= 99; qut++)
		{
			putchar((pnp / 10) + '0');
			putchar((pnp % 10) + '0');
			putchar(' ');
			putchar((qut / 10) + '0');
			putchar((qut % 10) + '0');
			if (pnp == 98 && qut == 99)
			continue;
			putchar(',');
			putchar(' ');
			}
			}
			putchar('\n');
			return (0);
}

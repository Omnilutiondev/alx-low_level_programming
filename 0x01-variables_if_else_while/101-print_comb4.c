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
	int idx, pnp, qut;

	for (idx = '0'; idx < '9'; idx++)
	{
		for (pnp = idx + 1; pnp <= '9'; pnp++)
		{
			for (qut = pnp + 1; qut <= '9'; qut++)
			{
				if ((pnp != idx) != qut)
				{
					putchar(idx);
					putchar(pnp);
					putchar(qut);
					if (idx == '7' && pnp == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

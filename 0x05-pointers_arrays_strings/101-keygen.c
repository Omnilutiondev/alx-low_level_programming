#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The program generates random valid passwords using a standard library
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char pass_word[64];
	int inx = 0, sum = 0, dif_h1, dif_h2;

	srand(time(NULL));

	while (sum < 2772)
	{
		pass_word[inx] = 33 + rand() % 94;
		sum += pass_word[inx++];
	}

	dif_h1 = sum - 2772;

	if (dif_h1 > 0)
	{
		dif_h2 = dif_h1 / 2;
		if (dif_h1 % 2 != 0)
		{
			dif_h1 = dif_h2 + 1;
			dif_h2 = dif_h2;
		}
		else
		{
			dif_h1 = dif_h2;
			dif_h2 = dif_h2;
		}

		for (inx = 0; pass_word[inx]; inx++)
		{
			if (pass_word[inx] >= (33 + dif_h1))
			{
				pass_word[inx] -= dif_h2;
				break;
			}
		}
	}

	pass_word[inx] = '\0';
	printf("%s\n", pass_word);
	return 0;
}

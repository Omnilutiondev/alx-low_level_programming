#include <stdio>
#include <stdlib.h>

/**
 * main - This program prints the minimum number of coins for change
 *
 * @argc: The number of command lines
 * @argv: The array that holds the command lines
 *
 * Return: 0 On Success, 1 on error
 */

int main(int argc, char *argv[])
{
	int cents, min_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		min_coins++;
		if ((cents - 25) >= 0)
		{
		cents -= 25;
		continue;
		}
		if ((cents - 10) >= 0)
		{
		cents -= 10;
		continue;
		}
		if ((cents - 5) >= 0)
		{
		cents -= 5;
		continue;
		}
		if ((cents - 2) >= 0)
		{
		cents -= 2;
		continue;
		}
		cents--;
	}

	printf("%d\n", min_coins);

	return (0);
}

#include <stdio>
#include <stdlib.h>

/**
 * main - This program prints the minimum number of coins for change
 *
 * @argc: The number of command lines
 * @argv: The array that holds the command lines
 *
 * Return: 0 (On Success)
 */

int main(int argc, char **argv)
{
	int chng, min_coin = 0;

	if (argc == 1 || argc > 2)
	{
	printf("Error\n");
	return (1);
	}

	chng = atoi(agrv[1]);

	while (chng > 0)
	{
		if (chng >= 25)
		chng -= 25;

		if (chng >= 10)
		chng -= 10;

		if (chng >= 5)
		chng -= 5;

		if (chng >= 2)
		chng -= 2;

		if (chng >= 1)
		chng -= 1;

		min_coin += 1;
	}
	printf("%d\n", min_coin);
	return (0);
}

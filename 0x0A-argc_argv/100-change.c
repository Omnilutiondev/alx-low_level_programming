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

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	min_coins += cents / 25;
	cents %= 25;

	min_coins += cents / 10;
	cents %= 10;

	min_coins += cents / 5;
	cents %= 5;

	min_coins += cents / 2;
	cents %= 2;

	min_coins += cents;

	printf("%d\n", min_coins);
	return (0);
}

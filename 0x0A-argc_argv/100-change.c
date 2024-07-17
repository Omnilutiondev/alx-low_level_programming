#include <stdio>
#include <stdlib.h>

/**
 * main - This program prints the minimum number of coins for change
 *
 * @argc: The number of command lines
 * @argv: The array that holds the command lines
 *
 * Return: 0 On Success
 */

int main(int argc, char **argv)
{
	int cents, min_coin = 0;

	if (argc == 1 || argc > 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(agrv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
		cents -= 25;
		if (cents >= 10)
		cents -= 10;
		if (cents >= 5)
		cents -= 5;
		if (cents >= 2)
		cents -= 2;
		if (cents >= 1)
		cents -= 1;
		min_coin += 1;
	}
	printf("%d\n", min_coin);
	return (0);
}

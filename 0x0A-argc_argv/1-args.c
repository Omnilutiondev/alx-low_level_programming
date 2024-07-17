#include <stdio.h>

/**
 * main - This program prints the number of arguments passed into it
 *
 * @argc: This is the number of command line arguments
 * @argv: This is the array containing the programs command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

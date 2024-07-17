#include <stdio.h>

/**
 * main - This program prints all arguments it receives
 *
 * @argc: This is the number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int cmdl;

	for (cmdl = 0 < argc; cmdl++)
	{
	printf("%s\n", argv[cmdl]);
	}

	return (0);
}

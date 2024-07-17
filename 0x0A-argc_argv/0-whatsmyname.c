#include <stdio.h>

/**
 * main - This program prints the program name
 *
 * @argc: This is the number of command line arguments
 * @argv: This is the array containing the program command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}

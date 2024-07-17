#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This program adds positive numbers
 *
 * @argc: The number of command lines to be added
 * @argv: The array that contains the program command lines
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int idx1, idx2, add = 0;

	for (idx1 = 1; idx1 < argc; idx1++)
	{
	for (idx2 = 0; argv[idx1][idx2] != '\0'; idx2++)
	{
	if  (!isdigit(argv[idx1][idx2]))
	{
	printf("Error\n");
	return (1);
	}
	}
	add += atoi(argv[idx1]);
	}
	printf("%d\n", add);
	return (0);
}

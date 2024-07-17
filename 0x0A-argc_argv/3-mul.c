#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program multiplies two numbers
 *
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int nmb1, nmb2, ans;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	nmb1 = atoi(argv[1]);
	nmb2 = atoi(argv[2]);
	ans = nmb1 * nmb2;

	printf("%d\n", ans);
	return (0);
}

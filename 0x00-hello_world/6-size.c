#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %lu byte\n", sizeof(char));
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of long int: %lu bytes\n", sizeof(long));
	printf("Size of long long int: %lu bytes\n", sizeof(long long));
	printf("Size of void*: %lu bytes\n", sizeof(void*));
	printf("Size of float: %lu bytes\n", sizeof(float));
	return (0);
}


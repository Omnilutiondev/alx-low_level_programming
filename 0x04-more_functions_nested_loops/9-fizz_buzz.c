#include "main.h"
#include <stdio.h>

/**
 * main - print numbers 1 to 100 and fizzbuzz
 *
 * Return: 0
 */

int main(void)
{
	int k;

	for (k = 0; k <= 100; k++)
	{
		if ((k % 3 == 0) && (k % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (k % 3 == 0)
		{
		printf("Fizz ");
		}
		else if (k % 5 == 0)
		{
		printf("Buzz ");
		}
		else
		{
		printf("%d ", k);
		}

		printf("Buzz");
		printf("\n");

		return (0);
	}
}

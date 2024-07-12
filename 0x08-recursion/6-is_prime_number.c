#include "main.h"
#include <stdio.h>

/**
 * prime_pusher - This a precursor function to check if a number is prime
 *
 * @numb: This the number to check
 * @idx: This the current divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int prime_pusher(int numb, int idx)
{
	if (numb <= 1)
		return (0);
	if (idx * idx > numb)
		return (1);
	if (numb % idx == 0)
		return (0);
	return (prime_pusher(numb, idx + 1));
}

/**
 * is_prime_number - This function checks if a number is prime
 *
 * @n: This the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (prime_pusher(n, 2));
}

#include "main.h"
#include <stdio.h>

/**
 * sqroot_pusher - The is a precursor function to calculate square root recursively
 *
 * @numb: This the number to calculate the square root of
 * @idx: This the current guess for the square root
 *
 * Return: Natural square root of n, or -1 if it doesn't exist
 */

int sqroot_pusher(int numb, int idx)
{
    if (idx * idx > numb)
        return (-1);
    if (idx * idx == numb)
        return (idx);
    return (sqroot_pusher(numb, idx + 1));
}


/**
 * _sqrt_recursion - This function returns the natural square root of a number
 *
 * @n: This is the number to calculate the square root of
 *
 * Return: Natural square root of n, or -1 if it doesn't exist
 */

int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (sqroot_pusher(n, 0));
}

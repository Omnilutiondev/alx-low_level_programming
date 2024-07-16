#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 * Return: On success 1.
 * O error, 1 is returned, and the errno is set correctly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

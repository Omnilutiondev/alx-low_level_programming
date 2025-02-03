#include "lists.h"

/**
 * _strlen - this returns the length of a string
 * @s: the string to be checked
 *
 * Return: the integer length of the str
 */
int _strlen(char *s)
{
	int idx = 0;

	if (!s)
		return (0);
	while (*s++)
		idx++;
	return (idx);
}

/**
 * print_list - This function prints all elements in a singly linked list
 * called list_t
 *
 * @h: The pointer to the head of the list
 *
 * Return: The total number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t idx  = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		idx++;
	}
	return (idx);
}

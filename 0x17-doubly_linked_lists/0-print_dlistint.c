#include "lists.h"

/**
 * print_dlistint - This function prints a doubly-linked list
 * @h: The address of the head node
 *
 * Return: The size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t idx = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		idx++;
	}
	return (idx);
}

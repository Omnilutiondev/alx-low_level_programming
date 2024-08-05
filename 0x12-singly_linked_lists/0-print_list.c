#include "list.h"

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
	int idx;

	if (h == NULL)
		return (0);

	for (idx = 1; h->next != NULL; idx++)
	{
		if (h->str == NULL)
		printf("[%u] %s\n", h->len, "(nil)");
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (idx);
}

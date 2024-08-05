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
	size_t nd_cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nd_cnt++;
	}

	return (nd_cnt);
}

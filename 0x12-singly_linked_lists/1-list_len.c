#include "list.h"

/**
 * list_len - This function determines the length of a linked list
 * @h: This is the pointer to the first node
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t idx = 0;

	while (h)
	{
		h = h->next;
		idx++;
	}
	return (idx);
}

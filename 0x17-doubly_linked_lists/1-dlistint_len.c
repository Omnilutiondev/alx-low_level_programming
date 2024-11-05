#include "lists.h"

/**
 * dlistint_len - This function returns the lenght of dlist
 * @h: The address of the head node
 *
 * Return: The size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t idx = 0;

	while (h)
	{
		h = h->next;
		idx++;
	}
	return (idx);
}

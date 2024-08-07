#include "lists.h"

/**
 * listint_len - This function returns the number of elements in a list
 *
 * @h: The head pointer
 *
 * Return: The number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt;

	if (h == NULL)
		return (0);
	for (cnt = 0; h != NULL; cnt++)
	{
		h = h->next;
	}
	return (cnt);
}

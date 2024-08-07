#include "lists.h"

/**
 * print_listint - This function prints all the elements in listint_t
 *
 * @h: The head pointer for the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t cnt;

	if (h == NULL)
		return (0);
	for (cnt = 0; h != NULL; cnt++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cnt);
}

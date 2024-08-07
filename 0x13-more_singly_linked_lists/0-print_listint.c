#include "list.h"

/**
 * print_listint - This function prints all the elements in listint_t
 *
 * @h: The head pointer for the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

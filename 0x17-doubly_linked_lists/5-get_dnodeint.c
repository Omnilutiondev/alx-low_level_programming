#include "lists.h"

/**
 * get_dnodeint_at_index - This function returns the node at a given index
 * @head: The pointer to the head node
 * @index: The index of the node to be returned
 *
 * Return: The address of the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	while (head)
	{
		if (idx == index)
			return (head);
		head = head->next;
		idx++;
	}
	return (NULL)
}

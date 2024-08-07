#include "lists.h"

/**
 * get_nodeint_at_index - This function retrieves a node at an index
 *
 * @head: The pointer to the first element in the list
 * @index: The node of the desired position
 *
 * Return: The pointer to the retrieved node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx;

	for (idx = 0; idx < index; idx++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

#include "lists.h"

/**
 * free_dlistint - This function frees a dlist
 * @head: The pointer to the head node
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new_node;

	while (head)
	{
		new_node = head;
		head = head->next;
		free(new_node);
	}
}

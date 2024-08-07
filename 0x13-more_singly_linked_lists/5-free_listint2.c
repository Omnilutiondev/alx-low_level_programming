#include "lists.h"

/**
 * free_listint2 - This function frees a list of nodes,
 * and sets the head to NULL
 *
 * @head: This is the pointer to the first element of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_val;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		temp_val = (*head)->next;
		free(*head);
		*head = temp_val;
	}
	free(*head);
	*head = NULL;
}

#include "lists.h"

/**
 * pop_listint - This function deletes the first nod of a list,
 * and returns the head node data
 *
 * @head: This is the pointer to the list
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int idx;
	listint_t *temp_val;

	if (head == NULL || *head == NULL)
		return (0);
	idx = (*head)->idx;
	temp_val = *head;
	*head = (*head)->next;
	free(temp_val);
	return (idx);
}

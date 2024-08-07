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
	listint_t *temp_val;
	int i;

	if (head == NULL || *head == NULL)
		return (0);
	
	temp_val = *head;
	i = temp_val->i;
	*head = (*head)->next;
	free(temp_val);

	return (i);
}

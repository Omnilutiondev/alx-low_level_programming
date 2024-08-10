#include "lists.h"

/**
 * pop_listint - This function deletes the first node of a list
 * and returns its data
 *
 * @head: This is the pointer to the list
 *
 * Return: The int
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *temp_val;

	if (head == NULL || *head == NULL)
	return (0);

	x = (*head)->x;
	temp_val = *head;
	*head = (*head)->next;
	free(temp_val);

	return (x);
}

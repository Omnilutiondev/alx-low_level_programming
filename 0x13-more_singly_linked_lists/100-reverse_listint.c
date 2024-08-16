#include "lists.h"

/**
 * reverse_listint - This function reverses a singly linked list
 *
 * @head: This is the pointer to the head
 *
 * Return: A pointer to the very first element in the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp_val;
	listint_t *rev_val;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp_val = *head;
	*head = temp_val->next;
	temp_val->next = NULL;

	while (*head != NULL)
	{
		rev_val = (*head)->next;
		(*head)->next = temp_val;
		temp_val = *head;
		if (rev_val == NULL)
			return (*head);
		*head = rev_val;
	}
	if (*head == NULL)
	{
		*head = temp_val;
		return (*head);
	}
	return (NULL);
}

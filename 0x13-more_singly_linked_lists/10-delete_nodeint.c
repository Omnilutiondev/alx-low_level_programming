#include "lists.h"

/**
 * delete_nodeint_at_index - This function deletes a node of a list
 * at a specific index
 *
 * @head: This is the pointer to the beginning of the list
 * @index: This is the index of the node to be freed up
 *
 * Return: 1 if success and -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int del;
	listint_t *temp_val;
	listint_t *da_node;

	temp_val = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (del = 0; del < index - 1 && temp_val != NULL && index != 0; del++)
		temp_val = temp_val->next;
	if (temp_val == NULL)
		return (-1);
	if (index == 0)
	{
		da_node = temp_val->next;
		free(temp_val);
		*head = da_node;
	}
	else
	{
		if (temp_val->next == NULL)
			node = temp_val->next;
		else
			node = temp_val->next->next;
		free(temp_val->next);
		temp->next = node;
	}
	return (1);
}

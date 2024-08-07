#include "lists.h"

/**
 * add_nodeint_end - This function adds a node to the end of a list
 *
 * @head: This is the pointer pointing to the head of the list
 * @n: This is the data added to the new list
 *
 * Return: The address of the new node element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_new;
	listint_t *temp_val;

	(void) temp_val;

	add_new = malloc(sizeof(listint_t));
	if (add_new == NULL)
		return (NULL);

	add_new->n = n;
	add_new->next = NULL;
	temp_val = *head;
	if (*head == NULL)
	{
		*head = add_new;
	}
	else
	{
		while (temp_val->next != NULL)
		{
			temp_val = temp_val->next;
		}
		temp_val->next = add_new;
	}

	return (*head);
}

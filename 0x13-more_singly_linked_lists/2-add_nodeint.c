#include "lists.h"

/**
 * add_nodeint - This function that adds a new node
 * at the beginning of a listint_t list
 *
 * @head: The pointer to the head pointer
 * which points the first node
 * @n: The new integer to be created
 *
 * Return: The head at the beginning
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);
			if (*head == NULL)
				new_node->next = NULL;
			else
				new_node->next = *head;
			new_node->n = n;
			*head = new_node;

			return (0);
}

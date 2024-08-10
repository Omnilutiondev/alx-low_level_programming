#include "lists.h"

/**
 * create_new_node - This function creates a new node
 *
 * @n: This is the data for the node
 *
 * Return: The pointer to the node
 */

listint_t *create_new_node(int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	add_node->next = NULL;

	return (add_node);
}

/**
 * insert_nodeint_at_index - This function insert a node
 * at an index in a list
 *
 * @head: The pointer to the first element of the list
 * @idx: The index to the position to be inserted
 * @n: The data to be created in the node
 *
 * Return: The final address of the newly created node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *temp_val;
	listint *add_node;

	if (head == NULL)
		return (NULL);

	add_node = create_new_node(n);
	if (add_node == NULL)
		return (NULL);


	if (idx = 0 || *head == NULL)
	{
		add_node->next = *head;
		*head =  add_node;
		return (add_node);
	}

	temp_val = *head;
	for (p = 0; p < idx - 1 && temp_val != NULL; p++)
		temp_val = temp_val->next;

	if (tmp_val == NULL)
	{
		free(add_node);
		return (NULL);
	}
	
	add_node->next =  temp_val->next;
	temp_val->next = add_node;

	return (add_node);
}


#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the pointer of the first node
 * @str: String to be duplicated into new node
 *
 * Return: Address of new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_ins;

	if (!head)
		return (NULL);

	new_ins = malloc(sizeof(list_t));
	if (!new_ins)
		return (NULL);

	/* Initializes the new node */
	new_ins->str = NULL;
	new_ins->len = 0;
	new_ins->next = NULL;

	if (str)
	{
		new_ins->str = strdup(str);
		if (!new_ins->str)
		{
			free(new_ins);
			return (NULL);
		}
		new_ins->len = _strlen(new_ins->str);
	}

	/* Linkthe new node to the list */
	new_ins->next = *head;
	*head = new_ins;

	return (new_ins);
}

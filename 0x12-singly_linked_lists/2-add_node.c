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
	list_t *new_heads = malloc(sizeof(list_t));

	if (!head || !new_heads)
		return (NULL);
	if (str)
	{
		new_heads->str = strdup(str);
		if (!new_heads->str)
		{
			free(new_heads);
			return (NULL);
		}
		new_heads->len = strlen(new_heads->str);
	}

	new_heads->next = *head;
	*head = new_heads;
	return (new_heads);
}

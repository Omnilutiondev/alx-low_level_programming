#include "lists.h"

/**
 * add_node_end - This function adds a node to the end of the list
 * @head: The pointer for the node
 * @str: The string to be added to the node
 *
 * Return: The size of the list or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end = malloc(sizeof(list_t));
	list_t *end = *head;

	if (!head || !new_end)
		return (NULL);
	if (str)
	{
		new_end->str = strdup(str);
		if (!new_end->str)
		{
			free(new_end);
			return (NULL);
		}
		new_end->len = strlen(new_end->str);

	}
	if (end)
	{
		while (end->next)
			end = end->next;
		end->next = new_end;
	}
	else
		*head = new_end;
	return (new_end);
}

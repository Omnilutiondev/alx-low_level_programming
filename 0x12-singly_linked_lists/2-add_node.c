#include "lists.h"

/**
 * add_node - This function adds a node to the head of the list
 * @head: this is the pointer to the head node
 * @str: the string field of the node
 *
 * Return: the size of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_ins;

	if (!head)
		return (NULL);

	new_ins = malloc(sizeof(list_t));
	if (!new_ins)
		return (NULL);

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

	new_ins->next = *head;
	*head = new_ins;

	return (new_ins);
}

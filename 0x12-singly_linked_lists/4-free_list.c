#include "lists.h"

/**
 * free_list - This function frees all nodes of a list
 * @head: The pointer to the head node in the list
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *wipe_node, *wipe_next;

	if (!head)
		return;

	wipe_node = head;
	while (wipe_node)
	{
		wipe_next = wipe_node->next;
		free(wipe_node->str);
		free(wipe_node);
		wipe_node = wipe_next;
	}
}

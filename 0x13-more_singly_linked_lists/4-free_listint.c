#include "lists.h"

/**
 * free_listint - This function frees a linked list
 *
 * @head: This is the pointer to the first node in the list
 *
 * Return: Do not return anything
 */

void free_listint(listint_t *head)
{
	listint_t *temp_val;

	while ((temp_val = head) != NULL)
	{
		head = head->next;
		free(temp_val);
	}
}

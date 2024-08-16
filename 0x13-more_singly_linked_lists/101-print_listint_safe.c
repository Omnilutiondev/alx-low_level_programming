#include "lists.h"

/**
 * free_listx - This function frees a linked list
 *
 * @head: This is the head of the list
 *
 * Return: Nothing
 */

void free_listx(listx_t **head)
{
	listx_t *temp_val;
	listx_t *curnt;

	if (head != NULL)
	{
		curnt = *head;
		while ((temp_val = curnt) != NULL)
		{
			curnt = curnt->next;
			free(temp_val);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - This function prints a linked list with a loop
 *
 * @head: This is the pointer for the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t da_node = 0;
	listx_t *htr_val, *new_val, add_val;

	htr_val = NULL;

	while (head != NULL)
	{
		new_val = malloc(sizeof(listx_t));

		if (new_val == NULL)
			exit(98);

		new_val->x = (void *)head;
		new_val->next = htr_val;
		htr_val = new_val;
		add_val = htr_val;

		while (add_val->next != NULL)
		{
			add_val = add_val->next;
			if (head == add_val->x)
			{
				printf("-> [%x] %d\n", (void *)head, head->n);
				free_listx(&htr_val);
				return (da_node);
			}
		}

		printf("[%x] %d\n", (void *)head, head->n);
		head = head->next;
		da_node++;
	}

	free_listx(&htr_val);
	return (da_node);
}


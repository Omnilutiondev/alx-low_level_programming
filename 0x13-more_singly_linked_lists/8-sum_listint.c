#include "lists.h"

/**
 * sum_listint - This function sums up all the data in a linked list
 *
 * @head: This is the pointer to the list
 *
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
	int summ = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		summ += head->n;
		head = head->next;
	}
	return (summ);
}

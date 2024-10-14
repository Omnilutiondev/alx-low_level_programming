#include "hash_tables.h"

/**
 * hash_table_print - This function prints a hash table
 * @ht: The hash table to be printed
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *temp;
	char pairs_printed = 0;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
	{
		printf("{}\n");
		return;
	}

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (pairs_printed > 0)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			pairs_printed++;
			temp = temp->next;
		}
	}
	printf("}\n");
}


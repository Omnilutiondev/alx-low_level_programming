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
	char flaag = 0; /* 0 while there is no data to print */

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (flaag == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flaag = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}

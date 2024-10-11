#include "hash_tables.h"

/**
 * hash_table_create - This creates a hash table
 * @size: The size of the array
 *
 * Return: The pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int q;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (q = 0; q < size; q++)
		hash_table->array[idx] = NULL;
	return (hash_table);
}

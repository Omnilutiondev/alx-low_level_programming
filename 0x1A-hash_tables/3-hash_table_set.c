#include "hash_tables.h"

/**
 * hash_table_set - Sets a key to a value in the hash table
 * @ht: The hash table to add the element to
 * @key: The key for the data
 * @value: The data to store
 *
 * Return: 1 on success, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *hash_node, *temp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}

	hash_node = make_hash_node(key, value);
	if (hash_node == NULL)
		return (0);

	hash_node->next = ht->array[idx];
	ht->array[idx] = hash_node;
	return (1);
}

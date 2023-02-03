#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value from a key in a hash table
 * @ht: hash table to look into
 * @key: key to retrieve value from
 *
 * Return: value associated with element, NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || ht->array == NULL ||
			ht->size == 0 || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

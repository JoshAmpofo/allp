#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of array
 *
 * Return: pointer to newly created hash table
 * Null if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	if (size < 1)
		return (NULL);
	/* allocate memory to table itself */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/* allocate pointers to head node */
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
		return (NULL);
	memset(hash_table->array, 0, sizeof(hash_node_t *) * size);

	hash_table->size = size;

	return (hash_table);
}

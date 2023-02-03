#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table to print
 *
 * Return: array, list or nothing if ht is NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	char check_pc = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (check_pc == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			check_pc = 1;
			node = node->next;
		}
	}
	printf("}\n");
}

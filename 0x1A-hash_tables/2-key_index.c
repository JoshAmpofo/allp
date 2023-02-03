#include "hash_tables.h"

/**
 * key_index - give a key an index in a hash table
 * @key: hash key to give index
 * @size: size of array of hash table
 *
 * Return: index of key/value pair in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

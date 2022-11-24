#include "lists.h"

/**
 * list_len - return the number of elements in a list_t
 * @h: pointer to node in linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}

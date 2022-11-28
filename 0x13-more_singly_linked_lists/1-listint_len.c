#include "lists.h"

/**
 * listint_len - print number of elements in a listint_t
 * @h: pointer to node
 *
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_eles = 0;

	while (h)
	{
		num_eles++;
		h = h->next;
	}
	return (num_eles);
}

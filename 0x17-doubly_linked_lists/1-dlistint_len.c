#include "lists.h"

/**
 * dlistint_len - count the number of elements in a DLL
 * @h: pointer to head node
 *
 * Return: the number of elements in a DLL
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}

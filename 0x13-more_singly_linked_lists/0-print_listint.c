#include "lists.h"

/**
 * print_listint - print all elements of a listint_t
 * @h: pointer to address of node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}

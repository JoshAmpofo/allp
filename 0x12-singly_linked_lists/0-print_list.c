#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all the elements of a list_t list
 * @h: pointer to address of node
 *
 * Return: number of nodes and content
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		n++;
		h = h->next;
	}
	return (n);
}

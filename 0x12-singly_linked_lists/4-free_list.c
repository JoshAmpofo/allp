#include "lists.h"

/**
 * free_list  -free memory allocated to list_t
 * @head: pointer to address of first node and entire node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *store_copy;

	while (head)
	{
		store_copy = head->next;

		free(head->str);
		free(head);
		head = store_copy;
	}
}

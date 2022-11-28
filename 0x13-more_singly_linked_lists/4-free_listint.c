#include "lists.h"

/**
 * free_listint - free a linked list listint_t
 * @head: pointer to address of first node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp_store;

	while (head)
	{
		temp_store = head->next;

		free(head);
		head = temp_store;
	}
}

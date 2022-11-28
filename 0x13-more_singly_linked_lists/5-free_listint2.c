#include "lists.h"

/**
 * free_listint2 - free a linked list listint_t
 * and sets head to NULL
 * @head: pointer to address of first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_store;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_store = (*head)->next;

		free(*head);
		*head = temp_store;
	}
	head = NULL;
}

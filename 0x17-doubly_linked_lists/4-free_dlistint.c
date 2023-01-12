#include "lists.h"

/**
 * free_dlistint - free memory block of a DLL
 * @head: pointer to beginning of node
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at given index in a DLL
 * @head: pointer to beginning of list
 * @index: position to delete node
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);

		current = current->next;
	}
	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	if (current == *head)
		*head = current->next;

	free(current);
	return (1);
}

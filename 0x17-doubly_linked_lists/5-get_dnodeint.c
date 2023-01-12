#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a DLL
 * @head: pointer to beginning of node
 * @index: index of node, starting from 0
 *
 * Return: nth node, NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	current = head;
	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (NULL);
		current = current->next;
	}

	return (current);
}

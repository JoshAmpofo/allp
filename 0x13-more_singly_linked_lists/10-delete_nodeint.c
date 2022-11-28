#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given position in listint_t
 * @head: address of node
 * @index: position to insert
 *
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node, *copy_node = *head;
	unsigned int node;

	if (copy_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy_node);

		return (1);
	}
	/* delete node at position */
	for (node = 0; node < (index - 1); node++)
	{
		if (copy_node->next == NULL)
			return (-1);
		copy_node = copy_node->next;
	}
	temp_node = copy_node->next;
	copy_node->next = temp_node->next;
	free(temp_node);

	return (1);
}

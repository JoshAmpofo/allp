#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of listint_t
 * @index: index of node starting at 0
 * @head: address of head node
 *
 * Return: nth node of list, NULL if node non-existent
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth_node;

	for (nth_node = 0; nth_node < index; nth_node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}

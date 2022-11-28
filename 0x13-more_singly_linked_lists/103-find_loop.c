#include "lists.h"

/**
 * find_listint_loop - find the loop in a listint_t
 * @head: pointer to node
 * Max of two variable declarations
 *
 * Return: address of loop node, NULL if loop non-existent
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	a = b = head;
	while (a && b && b->next)
	{
		a = a->next;
		b = b->next->next;

		if (a == b)
		{
			a = head;
			break;
		}
	}
	if (!a || !b || !b->next)
		return (NULL);
	while (a != b)
	{
		a = a->next;
		b = b->next;
	}
	return (b);
}

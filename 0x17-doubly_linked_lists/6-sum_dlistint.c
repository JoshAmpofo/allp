#include "lists.h"

/**
 * sum_dlistint - sum all data (n) in a DLL
 * @head: pointer to beginning of list
 *
 * Return: sum of all data in list, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

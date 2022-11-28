#include "lists.h"

/**
 * sum_listint - sum all data in lisint_t
 * @head: address of node
 *
 * Return: sum of data, 0 if list empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		if (head == NULL)
			return (0);

		sum += head->n;
		head = head->next;
	}
	return (sum);
}

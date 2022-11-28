#include "lists.h"

/**
 * pop_listint - delete head node of listint_t
 * @head: address of head node
 *
 * Return: data of head node, 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head; /* backup head to free its memory */
	n = (*head)->n; /* store head data into n */
	*head = (*head)->next; /* move head node to next */
	free(temp);

	return (n);
}

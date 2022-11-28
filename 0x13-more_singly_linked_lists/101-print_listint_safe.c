#include "lists.h"

/**
 * memalloc - reallocate memory to nodes in listint_t
 * @list: old list to append new list
 * @size: size of new list
 * @new: new node to add to list
 *
 * Return: pointer to new list
 */
const listint_t **memalloc(const listint_t **list, size_t size,
		const listint_t *new)
{
	const listint_t **newlist;
	size_t nodes;

	newlist = malloc(sizeof(listint_t) * size);
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (nodes = 0; nodes < size - 1; nodes++)
		newlist[nodes] = list[nodes];
	newlist[nodes] = new;
	free(list);

	return (newlist);
}

/**
 * print_listint_safe - print listint_t safely
 * @head: pointer to node
 *
 * Return: number of nodes in listint_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t index, numn = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (index  = 0; index < numn; index++)
		{
			if (head == list[index])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (numn);
			}
		}
		numn++;
		list = memalloc(list, numn, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (numn);
}

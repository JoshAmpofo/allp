#include "lists.h"

/**
 * alloc - reallocate memory to nodes in listint_t
 * @list: old list to append new list
 * @size: size of new list
 * @new: new node to add to list
 *
 * Return: pointer to new list
 */
listint_t **alloc(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t nodes;

	newlist = malloc(sizeof(listint_t *) * size);
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
 * free_listint_safe - free listint_t safely
 * @h: pointer to node
 * free list with loop
 * Loop only once
 * set head to NULl
 *
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t index, numn = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (h == NULL || *h == NULL)
		return (numn);

	while (*h != NULL)
	{
		for (index  = 0; index < numn; index++)
		{
			if (*h == list[index])
			{
				*h = NULL;
				free(list);
				return (numn);
			}
		}
		numn++;
		list = alloc(list, numn, *h);
		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(list);
	return (numn);
}

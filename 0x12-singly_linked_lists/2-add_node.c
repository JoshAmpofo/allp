#include "lists.h"

/**
 * add_node - add a new node to the neginning of a list_t
 * @head: head of node
 * @str: element string to add to list_t
 *
 * Return: address of new element, NULL if failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* pointer to first node in old list */
	char *dup_str;
	int len;

	/* allocate memory to new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL) /* if malloc fails */
		return (NULL);

	dup_str = strdup(str); /* duplicate string */
	if (dup_str == NULL) /* free memory if string points to nothing */
	{
		free(new_node);
		return (NULL);
	}

	/* iterate through str and find length */
	for (len = 0; str[len]; )
		len++;

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

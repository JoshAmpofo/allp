#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory to an array
 * memory should be allocate based on a set number of bytes
 * @nmemb: set number of elements
 * @size: bytes to allocate
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *fill_mem;
	unsigned int i;

	/* nmemb is 0 or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate memory to array */
	arr = malloc(size * nmemb);

	/* terminating condition if malloc fails */
	if (arr == NULL)
		return (NULL);

	/* set memory to zero */
	fill_mem = arr;

	for (i = 0; i < (size * nmemb); i++)
		fill_mem[i] = '\0';

	return (arr);
}

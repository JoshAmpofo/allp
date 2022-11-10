#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
	int *arr;
	unsigned int i;

	/* nmemb is 0 or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate memory to array */
	arr = malloc(sizeof(size) * nmemb);

	/* terminating condition if malloc fails */
	if (arr == NULL)
		return (NULL);

	/* set memory to zero */
	memset(arr, 0, nmemb * sizeof(size));

	/* Access array items */
	for (i = 0; i < nmemb; i++)
	{
		if (arr[i] != 0)
		{
			break;
		}
	}
	return (arr);
}

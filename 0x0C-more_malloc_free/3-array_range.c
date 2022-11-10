#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - create an array of integers
 * array should contain all min to max values ordered from min to max
 * @min: min range of values
 * @max: max range of values
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	/* min values less than max vlaues */
	if (min > max)
		return (NULL);

	/* set size of array */
	size = max - min + 1;

	/* allocate memory to array */
	arr = malloc(sizeof(int) * size);

	/* set terminating condition */
	if (arr == NULL)
		return (NULL);

	/* access array items */
	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}

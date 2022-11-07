#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @c: character to print
 * @size: size of memory to print
 *
 * Return: pointer to the array or NULL if it fails or n is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* 1st condition of task */
	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char)); /* set array size using malloc */

	if (array == NULL) /* malloc return condition */
		return (NULL);

	for (i = 0; i < size; i++) /* iterate through array items */
	{
		array[i] = c; /* set array items to char c */
	}
	return (array); /* return pointer to array */
}

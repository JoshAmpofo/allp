#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * malloc_checked - allocate memory
 * exit - exit status for normal process termination
 * @b: value to store in memory
 *
 * Return: pointer to allocated memory, exit status 98 if fail
 */
void *malloc_checked(unsigned int b)
{
	int *arr;

	/* allocate memory to arr */
	arr = malloc(b);

	/* if malloc fails */
	if (arr == NULL)
		exit(98); /* exit status */

	return (arr);
}

#include "main.h"
#include <stdio.h>

/**
 * print_array - print the elements of an array
 * @a: pointer operand to array
 * @n: number of elements in array
 *
 * Return: array elements separated by commas
 */
void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		if (y != n - 1)
		{
			printf("%d, ", a[y]);
		}
		else
		{
			printf("%d", a[y]);
		}
	}
	printf("\n");
}

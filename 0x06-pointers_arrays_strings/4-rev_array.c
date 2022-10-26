#include "main.h"

/**
 * reverse_array - reverse an array
 *
 * @n: number of elements in array
 * @a: array
 *
 * Return: reversed array elements
 */
void reverse_array(int *a, int n)
{
	int arr, temp_arr;

	/* iterate through array and split in half (odd and even lengths) */
	for (arr = 0; (arr < (n - 1) / 2); arr++)
	{
	/* swap and store array elements in temp array */
		temp_arr = a[arr];
		a[arr] = a[n - 1 - arr];
		a[n - 1 - arr] = temp_arr;
	}
}

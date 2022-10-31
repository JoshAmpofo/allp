#include "main.h"

/**
 * print_diagsums - sum the two diagonals of a square matrix
 * @a: array to perform sum operation
 * @size: array size
 *
 * Return: sum of diagonals
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, d = 0, m = 0; /* set variables to store sum of diagonals */

	/**
	 * iterate through first matrix and calculate sum of main diag (m)
	 * and off-diagonal (k)
	 */
	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		m += *(a + k);
	}
	/**
	 * iterate through second matrix and calculate sum of main diag (d)
	 * and off-diagonal (k)
	 */
	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		d += *(a + k);
	}
	printf("%d, %d\n", m, d); /* return sum of main and off-diag */
}

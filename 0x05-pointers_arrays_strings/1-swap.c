#include "main.h"

/**
 * swap_int - Swap the values of two integer variables
 * @a: first integer variable
 * @b: second integer variable
 *
 * Return: output of swap function
 */
void swap_int(int *a, int *b)
{
	int ptr_var;

	ptr_var = *a;
	*a = *b;
	*b = ptr_var;
}

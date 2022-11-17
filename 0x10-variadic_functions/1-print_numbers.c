#include "variadic_functions.h"

/**
 * print_numbers - print integers
 * @n: number of integers to print
 * @separator: string to be printed between numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, arr;

	/* declare variadic datatypes pointer*/
	va_list ptr_n;

	/* start function */
	va_start(ptr_n, n);

	/* iterate each element in function */
	for (i = 0; i < n; i++)
	{
		arr = va_arg(ptr_n, const unsigned int);
		printf("%d", arr); /* print list of int */
		/* separator conditions */
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_n); /* end argument traversal */
}

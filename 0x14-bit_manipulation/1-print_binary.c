#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * No use of arrays, malloc, % or / operators
 * @n: target number
 *
 * Return: binary rep of number input
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

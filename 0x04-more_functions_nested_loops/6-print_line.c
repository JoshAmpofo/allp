#include "main.h"

/**
 * print_line - print straight line using specified number
 * @n: number variable
 * If number is 0 or less, print only newline
 * Each line should end with a newline
 *
 * Return: line output
 */
void print_line(int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

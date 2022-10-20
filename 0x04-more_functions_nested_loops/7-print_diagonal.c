#include "main.h"
/**
 * print_diagonal - print diagonal line on screen based on number specified
 * @n: number of diagonals to print
 * Use only _putchar
 *
 * if n is zero or less , print only newline
 *
 * Return: diagonal to screen
 */
void print_diagonal(int n)
{
	int diag, space;

	if (n <= 0)
		_putchar('\n');

	for (diag = 0; diag < n; diag++)
	{
		for (space = 0; space < diag; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_triangle - print a triangle followed by a new line
 * triangle is denoted by #
 * @size: rows to print
 * if triangle row number is 0 or less than 0, print only newline
 *
 * Return: symbol to screen
 */
void print_triangle(int size)
{
	int row, space, symbol;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (symbol = 1; symbol <= row; symbol++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

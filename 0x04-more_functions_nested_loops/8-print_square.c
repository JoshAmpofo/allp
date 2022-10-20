#include "main.h"

/**
 * print_square - print a square (#)
 * @size: square value
 *
 * if size is 0 or less, print only a new line
 *
 * Return: output squares on terminal
 */
void print_square(int size)
{
	int sq1, sq2;

	if (size <= 0)
		_putchar('\n');

	for (sq1 = 0; sq1 < size; sq1++)
	{
		for (sq2 = 0; sq2 < size; sq2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

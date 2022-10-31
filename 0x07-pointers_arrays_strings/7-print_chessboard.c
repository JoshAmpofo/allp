#include "main.h"

/**
 * print_chessboard - print chessboard from an array
 * @a: array
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int row, column;

	/* iterate through rows */
	for (row = 0; row < 8; row++)
	{
		/* iterate through columns */
		for (column = 0; column < 8; column++)
		{
			/* print chessboard */
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: character to test function against
 *
 * Return: 1 and positive sign if number is greater than zero,
 * -1 is less than zero
 * and zero if zero
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar(',');
	_putchar(' ');
	_putchar('\n');
}

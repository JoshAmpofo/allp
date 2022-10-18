#include "main.h"
/**
 * times_table - print the 9 times table starting with 0
 * num is number to multiply, times is the multiplication
 * res is result of the multiplication
 * Return: void
 */
void times_table(void)
{
	int num, times, res;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (times = 1; times <= 9; times++)
		{
			_putchar(',');
			_putchar(' ');

			res = num * times;

			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_times_table - print the n times table starting with 0
 * @n: number to be tested
 *
 * if n greater than 15 or less than 0 return nothin
 * num is number to multiply, times is the multiplication
 * res is result of the multiplication
 *
 * Return: result of function
 */
void print_times_table(int n)
{
	int num, times, res;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (times = 1; times <= n; times++)
			{
				_putchar(',');
				_putchar(' ');

				res = num * times;

				if (res <= 99)
					_putchar(' ');

				if (res <= 9)
					_putchar(' ');

				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10)) % 10 + '0');
				}
				else if (res <= 99 && res >= 10)
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

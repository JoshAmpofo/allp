#include "main.h"
/**
 * jack_bauer - print every minute of the movie
 * starting from 00:00 to 23:59
 * i signifies the hour, j signifies the minutes
 * Return: void
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = i; j <= 59; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');

			_putchar(':');

			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}



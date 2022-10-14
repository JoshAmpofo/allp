#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 *
 * This program will print two-digit combinations of two two-digits
 *
 * Only putchar() is allowed
 *
 * Putchar can be used only a maximum of eight times
 *
 * Not allowed to use any variable of type `char`
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');

			putchar(' ');

			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			if (i == 98 && j == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program will print two different digits using only putchar()
 * Putchar can only be used fives times
 * Print only the smallest combination of the two digits
 */
int main(void)
{
	int i, j, k = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = k; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
			}
			if (i == j)
			{
				continue;
			}
			if (i == '8' && j == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		k++;
	}
	putchar('\n');
	return (0);
}

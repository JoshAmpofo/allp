#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 *
 * This program will print three digit combinations using only putchar()
 *
 * Putchar can be used only a maximum of six times
 *
 * Print the smallest combination of the three digits
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = 0; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && j == '8' && k == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

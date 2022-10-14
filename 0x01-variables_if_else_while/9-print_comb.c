#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program will print all single digits from 0 - 9 separated by commas
 * Only putchar() can be used
 * You can only use it up to four times
 */
int main(void)
{
	int numz;

	for (numz = 0; numz < 10; numz++)
	{
		putchar(numz + '0');
		if (numz < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

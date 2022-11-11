#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 *
 * This program will print out the alphabets using only putchar()
 */
int main(void)
{
	int i = 97;

	do
	{
		putchar(i);
		i++;
	} while (i <= 122);
	putchar('\n');

	return (0);
}

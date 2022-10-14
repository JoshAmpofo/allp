#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program will print all single digit numbers of base 10 using putchar
 * Putchar only accepts characters
 */
int main(void)
{
	int numz = '0';

	for (numz = '0'; numz <= '9'; ++numz)
		putchar(numz);
	putchar('\n');
	return (0);
}

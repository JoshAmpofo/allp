#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program will print hexadecimal numbers using only putchar()
 */
int main(void)
{
	char alpha = 'a';
	int numz = '0';

	for (numz = '0'; numz <= '9'; numz++)
		putchar(numz);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

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
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
		putchar(alpha);
	putchar('\n');

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program will print the alphabets excluding q and e
 */
int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if ((alpha != 'e') & (alpha != 'q'))
			putchar(alpha);
	putchar('\n');

	return (0);
}

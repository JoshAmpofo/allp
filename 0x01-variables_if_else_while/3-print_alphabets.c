#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program prints the alphabets in lower and uppercase using putchar()
 */
int main(void)
{
	char alpha = 'A';
	char beta = 'a';

	for (beta = 'a'; beta <= 'z'; ++beta)
		putchar(beta);
	for (alpha = 'A'; alpha <= 'Z'; ++alpha)
		putchar(alpha);
	putchar('\n');

	return (0);
}

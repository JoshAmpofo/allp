#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program will print all single digit numbers of base 10 starting from 0
 */
int main(void)
{
	int number = 0;

	for (number = 0; number < 10; number++)
		printf("%d\r", number);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments program receives
 * @argv: string vector of arguments
 * @argc: argument count
 *
 * Return: arguments printed each on a new line
 */
int main(int argc, char *argv[])
{
	int i; /* iterable variable */

	for (i = 0; i < argc; i++) /* loop through args */
	{
		printf("%s\n", argv[i]); /* print each arg */
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argv: string vector of argc
 * @argc: argument count
 *
 * Return: value of multiplication or error and 1
 */
int main(int argc, char *argv[])
{
	/* set variables to iterate and multiply */
	int i, mul = 1;

	/* conditional */
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]); /* atoi: converts string to integer */
		}
		printf("%d\n", mul); /* return value of mul */
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

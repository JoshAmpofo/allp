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
	int i, j;

	/* number of arguments should be 3 taking into account prog name */
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]); /* convert 2nd arg to int */
		j = atoi(argv[2]); /* convert 3rd arg to int */
		printf("%d\n", i * j);
	}
	return (0);
}

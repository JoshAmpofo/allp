#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: pointer string vector for argc
 *
 * Return: sum, 0 if no arg provided, error if one string in int arg
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *err; /* will store string within the integer args */

	if (argc < 2) /* if no argument is passed */
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		/**
		 * strtol converts string to integer
		 * and returns an error if int ont in base value
		 */
		j = strtol(argv[i], &err, 10);
		if (*err) /* check if arg is a string and not int */
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += j; /* add int args */
		}
	}
	printf("%d\n", sum);
	return (0);
}


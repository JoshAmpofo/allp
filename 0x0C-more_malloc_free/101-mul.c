#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply two positive numbers
 * @argc: cmd line argument count
 * @argv: argument vector, string pointer to argc
 * Use more than five functions
 *
 * Return: result of multiplication
 * if num of args incorrect, print error with exit status of 98
 * num1 and num2 should be made of only digits
 * if not print error with exit status of 98
 */
int main(int argc, char *argv[])
{
	int row, col;
	unsigned long mul;

	/* check number of arguments provided */
	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	/* create array to store values and check if input is all digit */
	for (row = 1; row < argc; row++)
	{
		for (col = 0; argv[row][col] != '\0'; col++)
		{
			if (argv[row][col] > 57 || argv[row][col] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	/* multiply numbers */
	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%lu\n", mul);
	return (0);
}

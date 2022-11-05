#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coins to make change
 * @argc: argument count
 * @argv: string vector of argc
 * 
 * Did not use atoi because it didnt give any flags when there was a logic error
 *
 * Return: change, error and 1 if is arg < 2, 0 if no arg provided
 */
int main(int argc, char *argv[])
{
	unsigned int i;
	int amount, change;
	int cents[] = {25, 10, 5, 2, 1};
	char *a;

	/* first condition */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = strtol(argv[1], &a, 10); /* change string to int */
	change = 0;

	if (!*a) 
	{
		while (amount > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (amount >= cents[i])
				{
					change += amount / cents[i];
					amount = amount % cents[i];
				}
			}
		}
		if (amount == 1)
			change++;
	}
	else
	{
		printf("0\n");
	}

	printf("%d\n", change);
	return (0);
}

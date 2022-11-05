#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coins to make change
 * @argc: argument count
 * @argv: string vector of argc
 *
 * Did not use atoi
 * because didn't give any flags when there was a conv error
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

	if (!*a) /* not int */
	{
		while (amount > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++) /* iterate element by element */
			{
				if (amount >= cents[i])
				{
					change += amount / cents[i]; /* change required */
					amount = amount % cents[i];
				}
			}
		}
		if (amount == 1)
			change++; /* count number of change */
	}
	else
	{
		printf("0\n");
	}

	printf("%d\n", change); /* change change number */
	return (0);
}

#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 * numbers should be separated by commas and a space
 * numbers should start with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int count;

	unsigned long first_num = 0, second_num = 1;
	unsigned long sum;

	for (count = 0; count < 50; count++)
	{
		sum = first_num + second_num;
		printf("%lu", sum);

		first_num = second_num;
		second_num = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

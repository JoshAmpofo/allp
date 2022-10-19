#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers
 * numbers should be separated by commas and a space
 * numbers should start with 1 and 2
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long first_num = 0, second_num = 1;
	unsigned long sum;
	unsigned long seq1_half1, seq1_half2;
	unsigned long seq2_half1, seq2_half2;
	unsigned long fh1, fh2;

	for (count = 0; count < 92; count++)
	{
		sum = first_num + second_num;
		printf("%lu, ", sum);

		first_num = second_num;
		second_num = sum;
	}
	seq1_half1 = first_num / 10000000000;
	seq2_half1 = second_num / 10000000000;
	seq1_half2 = first_num % 10000000000;
	seq2_half2 = second_num % 10000000000;
	for (count = 93; count < 99; count++)
	{
		fh1 = seq1_half1 + seq2_half1;
		fh2 = seq1_half2 + seq2_half2;
		if (seq1_half2 + seq2_half2 > 9999999999)
		{
			fh1 += 1;
			fh2 %= 10000000000;
		}
		printf("%lu%lu", fh1, fh2);
		if (count != 98)
			printf(", ");
		seq1_half1 = seq2_half1;
		seq1_half2 = seq2_half2;
		seq2_half1 = fh1;
		seq2_half2 = fh2;
	}
	printf("\n");
	return (0);
}

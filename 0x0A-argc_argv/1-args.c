#include <stdio.h>
#include <stdlib.h>

/**
 * main - count number of arguments in a program
 * @argc: argument count
 * @argv: string vector of argument
 *
 * Return: integer value of arguments
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	/* since argc is of the form argc + 1 (counts name of prog) */
	/*subtract 1 from argc to get total count */
	printf("%d\n", argc - 1);

	return (0);
}

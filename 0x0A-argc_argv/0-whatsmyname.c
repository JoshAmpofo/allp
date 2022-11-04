#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of the program followed by a new line
 *
 * Don't recompile even when the program is renamed
 *
 * Return: Name of program with its path
 */
int main(int argc, char *argv[])
{
	int i; /* variable to store index value of argv */
	
	/* loop to iterate value of argv */
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

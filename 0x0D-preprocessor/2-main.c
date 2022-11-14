#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the name of a file from which program is compiled
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);

	return (0);
}

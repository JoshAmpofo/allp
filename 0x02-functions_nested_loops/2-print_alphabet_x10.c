#include "main.h"
/**
 * print_alphabet_x10 - user-defined function to print alphabet in lowercase
 * in ten cycles using _putchar
 *
 * No return value since function is void
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

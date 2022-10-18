#include "main.h"

/**
 * print_alphabet - void function used to print lowercase alphabets
 *
 * Has no return value
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}


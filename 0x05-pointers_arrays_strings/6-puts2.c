#include "main.h"

/**
 * puts2 - skip the succeeding character in a string
 * and print character starting from the first char
 * @str: pointer variable to store each character
 *
 * Return: new string without some characters
 */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	{
		if (string % 2 == 0)
			_putchar(str[string]);
	}
	_putchar('\n');
}


#include "main.h"

/**
 * _puts - print a tring to stdout
 * @s: each character of string
 *
 * Return: void
 */
void _puts(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		_putchar(s[index]);
		index++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _strlen_recursion - find the length of a string
 * @s: string to find length
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}

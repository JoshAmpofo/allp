#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: pointer string to measure length
 *
 * Return: length value of string
 */
int _strlen(char *s)
{
	int len_var = 0;

	while (*s != '\0')
	{
		s++;
		len_var++;
	}
	return (len_var);
}

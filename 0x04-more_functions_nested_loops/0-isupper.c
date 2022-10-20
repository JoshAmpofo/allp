#include "main.h"
/**
 * _isupper - checks if a given character is uppercase
 * @c: character to check
 *
 * Return: 1 if it is, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

#include "main.h"
/**
 * _isalpha - user-defined function to determine whether a character
 * is lowercase, uppercase or letter
 *
 * @c: operand to perform test on
 *
 * Return: 1 if condition above is fulfilled, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	_putchar('\n');
}

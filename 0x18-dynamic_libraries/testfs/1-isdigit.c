#include "main.h"
/**
 * _isdigit - check if a character is a digit from 0 through 9
 *
 * @c: digit term to check
 *
 * Return: 1 if it is, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _islower - user-defined function to check if a character is lowercase
 * @c: operand to check function against
 *
 * Return: 1 or 0 based on function output
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	
	_putchar('\n');
}

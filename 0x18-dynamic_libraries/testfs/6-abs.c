#include "main.h"
/**
 * _abs - return the absolute value of an integer
 *
 * @n: test case for function
 *
 * Return: absolute value of number
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
	_putchar('\n');
}

#include "main.h"

/**
 * _pow_recursion - raise an integer to the power
 * @x: base integer
 * @y: exponent
 *
 * Return: exponential result or -1 if lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}

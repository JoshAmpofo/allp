#include "main.h"

/**
 * Tempfxn - check if a number is a squareroot of given integer
 * @x: square root number
 * @y: number for which we are to find square root
 *
 * Return: nothing
 */
int Tempfxn(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	return (Tempfxn(x + 1, y));
}
/**
 * _sqrt_recursion - find square root of a number
 * @n: given number
 *
 * Return: square root value or -1 if number has no squareroot
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (Tempfxn(1, n));
}

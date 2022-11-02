#include "main.h"

/**
 * factorial - find the factorial of a given number
 * @n: given number
 *
 * Return: -1 if n lower than 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

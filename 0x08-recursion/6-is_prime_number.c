#include "main.h"

/**
 * prime_check - check if number has prime factors (1, n)
 * @i: iterable value to check n factor against
 * @num: number to check if prime
 *
 * Return: 1 if true, 0 if false
 */
int prime_check(int num, int i)
{
	if (i < 2 || i % num == 0)
		return (0);
	else if (num > i / 2)
		return (1);
	else
		return (prime_check(num + 1, i));
}

/**
 * is_prime_number - check if number is a prime number
 * @n: number to check
 *
 * Return: 1 if true
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}

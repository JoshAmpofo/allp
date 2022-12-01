#include "main.h"

/**
 * flip_bits - count the number of bits to flip
 * in order to move from one number to another
 * @n: target number
 * @m: flip target
 * Not allowed to use % or / operators
 *
 * Return: number of bits required to flip from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

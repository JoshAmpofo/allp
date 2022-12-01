#include "main.h"

/**
 * set_bit - set value of a bit to 1 at a given index
 * @index: index of target bit, starting from 0
 * @n: target bit
 *
 * Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}

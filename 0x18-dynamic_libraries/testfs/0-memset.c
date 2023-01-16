#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @b: address of memory to print
 * @n: size of memory to print
 * @s: pointer to memory area
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/* set pointer address to variable s */
	char *p = s;

	/* iterate through character in memory address till size n */
	while (n--)
	{
		/* append character in memory to buffer with each iter */
		*p++ = (unsigned char)b;
	}
	return (s); /* return copied memory */
}

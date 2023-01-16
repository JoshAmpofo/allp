#include "main.h"

/**
 *_memcpy - copies memory area
 * @dest: destination to copy string to
 * @src: source of string
 * @n: size of memeory to print
 *
 * Return: pointer to destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* set *dest and *src to new variables */
	char *dest_str = (char *)dest;
	char *src_str = (char *)src;

	/* iterate through dest and str checking if len is not zero */
	if ((dest_str != 0) && (src_str != 0))
	{
		while (n) /* till size to print */
		{
			/* copy byte by byte */
			*(dest_str++) = *(src_str++);
			--n;
		}
	}
	return (dest); /* print copied byte */
}

#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @accept: string containing characters to be matched
 * @s: string to be matched
 *
 * Return: matched string or null if string non-existent
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		/* iterate through string to be matched */
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (*s == accept[j]) /* search strings for matching */
					return (s);
			}
			s++; /* count byte for byte in s */
		}
	}
	return (NULL);
}

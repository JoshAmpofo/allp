#include "main.h"

/**
 * _strstr - searches a string for any of a set of bytes
 * @needle: string containing characters to be matched
 * @haystack: string to be matched
 *
 * Return: matched string or null if string non-existent
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i]) /* iterate through string to be matched byte by byte */
	{
		while ((needle[j] && haystack[i] == needle[0])) /* check if each byte is same as index of string search */
		/* iterate through string to be matched */
		{
			if (haystack[i + j] == needle[j]) /* compare source string dest string */
			{
				j++; /* count byte of dest string */
			}
			else
				break;
		}
		if (needle[j]) /* dest string byte */
		{
			i++; /* count byte for byte in source */
			j = 0;
		}
		else
			return (haystack + i); /* return byte of dest in source */
	}
	return (0);
}

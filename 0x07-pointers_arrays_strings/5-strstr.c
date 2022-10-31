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

	while (haystack[i])
	{
		while ((needle[j] && haystack[i] == needle[0]))
		/* iterate through string to be matched */
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
				break;
		}
		if (needle[j])
		{
			i++; /* count byte for byte in s */
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}

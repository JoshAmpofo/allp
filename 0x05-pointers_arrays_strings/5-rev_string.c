#include "main.h"

/**
 * rev_string - reverse a given string
 * @s: individual characters in given string
 *
 * Return: reversed string output
 */
void rev_string(char *s)
{
	int i = 0, len, rev;
	char let;

	while (s[i] != '\0')
	{
		i++;
	}
	rev = i - 1;

	for (len = 0; rev >= 0 && len < rev; rev--, len++)
	{
		let = s[len];
		s[len] = s[rev];
		s[rev] = let;
	}
}

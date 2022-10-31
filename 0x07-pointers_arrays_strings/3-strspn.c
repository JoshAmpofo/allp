#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @accept: string containing character to be matched
 * @s: string to be scanned
 *
 * Return: length of a in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0;

	/* iterate through i (string containing character to be matched) */
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)  /* character not empty space */
		{
			/* iterate through j (string to be matched) */
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j]) /* if characters are equal */
					k++; /* count occurence of character */
			}
		}
		else
		{
			return (k);
		}
	}
	return (k); /* return count of matched character */
}

#include "main.h"

/**
 * leet - encode a string into integer characters
 *
 * @s: target string
 *
 * Only use one if and two loops
 * No ternary operator and switch usage
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL"; /* predefine leet characters */
	char b[] = "4433007711"; /* predefine leet corrs numbers */

	/* iterate through strings */
	for (i = 0; *(s + i); i++)
	{
		/* set new_string counter */
		for (j = 0; j <= 9; j++)
		{
			/* convert given string to leet characters */
			if (a[j] == s[i])
				s[i] = b[j];
		}
	}
	return (s); /* leet encoded characters */
}

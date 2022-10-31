#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search for character
 * @c: character to search
 *
 * Return: character if found, null if not
 */
char *_strchr(char *s, char c)
{
	int i;

	/* iterate through string char by char */
	for (i = 0; s[i] != '\0'; ++i)
	{
		if (c != *s) /* count values in char not equal s */
		{
			s++;
		}
		else
		{
			return (s); /* return value of char if in s */
		}
	}
	return (0);
}

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
	/* iterate through string char by char */
	while (*s)
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
		if (c == '\0') /* return 0 if char at EOF */
			return (s);
		return (NULL);
}

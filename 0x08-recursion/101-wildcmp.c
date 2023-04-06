#include "main.h"

/**
 * wildcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *      can contain a special character '*'
 *      which can replace any string, including an empty one
 *
 * Return: 1 if strings are identical. 0 if otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* check if both strings are empty, return 1 */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	/* check if the second string has a wild character recurs */
	else if (*s2 == '*')
	{
		if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1)); /* skip wildchar */
		}
		else /* match wildchar to next string */
		{
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
		}
	}
	/* check if both strings are the same, move to next char */
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else /* chars don't match */
		return (0);
}

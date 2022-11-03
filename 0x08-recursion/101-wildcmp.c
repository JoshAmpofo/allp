#include "main.h"

/**
 * chk_str - check if strings fulfill similarity conditions
 * @s1: source string
 * @s2: dest string
 * @a: first half of string
 * @sc: special character
 *
 * Return: True or False
 */
int chk_str(char *s1, char *s2, int a, int sc)
{
	if (s1[a] == '\0' && s2[sc] == '\0')
		return (1);
	if (s1[a] == s2[sc])
		return (chk_str(s1, s2, a + 1, sc + 1));
	if (s1[a] == '\0' && s2[sc] == '*')
		return (chk_str(s1, s2, a, sc + 1));
	if (s2[sc] == '*')
		return (chk_str(s1, s2, a + 1, sc) || chk_str(s1, s2, a, sc + 1));
	return (0);
}

/**
 * wildcmp - compare strings for similarity
 * @s1: source string
 * @s2: dest string
 *
 * Return: True or false in numerics
 */
int wildcmp(char *s1, char *s2)
{
	return (chk_str(s1, s2, 0, 0));
}

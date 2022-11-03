#include "main.h"

/**
 * pal_str_chk - check if a given string fulfills palindrome reqs
 * @s: string
 * @a: start of string
 * @e: end of string
 * Return: True or false in numerics
 */
int pal_str_chk(char *s, int a, int e)
{
	/* check if there is only a single char */
	if (s[a] == s[e])
		if (a > e / 2) /* if there are more than one char */
			return (1); /* check if middle is palindrome */
		else
			return (pal_str_chk(s, a + 1, e - 1));
	else
		return (0);
}

/**
 * _strlen_recursion - find length of string
 * @s: string
 * Return: True or false in numerics
 */
int _strlen_recursion(char *s)
{
	/* check length of string */
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * is_palindrome - driver function/code
 * @s: string to test
 * Return: true or false in numerics
 */
int is_palindrome(char *s)
{
	/* check for null characters and reverse string */
	/* compare to original string, if same then palindorme */
	return (pal_str_chk(s, 0, _strlen_recursion(s) - 1));

}

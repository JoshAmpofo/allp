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
	int old_str, new_str;
	char leet_chars[] = "aAeEoOtTlL"; /* predefine leet characters */
	char enc_nums[] = "4433007711"; /* predefine leet corrs numbers */

	/* iterate through strings */
	for (old_str = 0; *(s + old_str); old_str++)
	{
		/* set new_string counter */
		for (new_str = 0; new_str <= 9; new_str++)
		{
			/* convert given string to leet characters */
			if (leet_chars[new_str] == s[old_str])
				s[old_str] = enc_nums[new_str];
		}
	}
	return (s); /* leet encoded characters */
}

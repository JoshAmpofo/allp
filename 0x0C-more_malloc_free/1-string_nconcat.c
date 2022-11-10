#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: destination string
 * @s2: soruce string
 * @n: bytes to copy
 *
 * Return: pointer to new string that is null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	int len_s1;
	unsigned int len_s2;

	/* if NULL is passed, treat as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* find length of s1 and s2 */
	len_s2 = strlen(s2);
	len_s1 = strlen(s1);

	/* use entire string if n greater or equal to len_s2 */
	if (n >= len_s2)
		n = len_s2;

	/* add length of bytes of s2 to len of s1 */
	len_s1 += n;

	/**
	 * allocate memory to array
	 * +1 to take into consideration null terminating char
	 */
	new_str = malloc(len_s1 + 1);

	/* set terminating condition if malloc fails */
	if (new_str == NULL)
		return (NULL);

	/* copy array into s1 */
	strcpy(new_str, s1);

	/* concatenate array, s2 and number of bytes */
	strncat(new_str, s2, n);

	return (new_str);
}

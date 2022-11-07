#include "main.h"
#include <stdlib.h>

/**
 * str_concat - conatenate two strings
 * new string should contain s1 and s2 and be null terminated
 * if NULL is passed, treat as an empty string
 * @s1: string destination
 * @s2: string source
 *
 * Return: concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len_s1, len_s2, len_cat, i, j;

	len_s1 = len_s2 = 0;

	/* Find length of s1 and s2 */
	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len_s1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len_s2++;
	}
	/* Find concatenated string length */
	len_cat = len_s1 + len_s2;

	/* allocate memory to concat string variable */
	new_str = (char *)malloc(sizeof(char) * (len_cat + 1));

	/* set condition for if malloc fails */
	if (new_str == NULL)
		return (NULL);

	/* Add s1 to new_str */
	for (i = 0; i < len_s1; i++)
		new_str[i] = s1[i];

	/* Add s2 to new_str */
	for (j = 0; j < len_s2; j++, i++)
		new_str[i] = s2[j];

	/* Add null terminating character to new_str */
	new_str[len_cat] = '\0';
	return (new_str);
}

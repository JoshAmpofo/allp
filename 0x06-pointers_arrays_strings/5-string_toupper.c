#include "main.h"

/**
 * string_toupper - convert lowercase characters to uppercase
 *
 * @s: string
 *
 * Return: uppercase characters
 */
char *string_toupper(char *s)
{
	int index;

	index = 0;

	/* iterate chars in string and check length */
	while (*(s + index) != '\0')
	{
		if (*(s + index) >= 97  && *(s + index) <= 122) /* 97 = a, 122 = z */
		{
			*(s + index) -= 97 - 65;  /* small case char to uppercase char */
		}
		index++;
	}
	return (s); /* print to screen uppercase string */
}

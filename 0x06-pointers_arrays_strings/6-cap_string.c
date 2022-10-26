#include "main.h"

/**
 * cap_string - capitalize all words in a string
 *
 * @s: string
 *
 * Return: value of s after capitalization
 */
char *cap_string(char *s)
{
	int index;
	int up_str;
	char sym[] = " \t\n,;.!?\"(){}";

	index = 0;

	/* iterate chars in string and check length */
	while (*(s + index) != '\0')
	{
		if (*(s + index) >= 97  && *(s + index) <= 122) /* 97 = a, 122 = z */
		{
			if (index == 0)
			{
				*(s + index) -= 97 - 65;  /* small case char to uppercase char */
			}
			else
			{
				for (up_str = 0; up_str <= 12; up_str++) /*loop through uppercase */
				{
					if (sym[up_str] == *(s + index - 1))
					{
						*(s + index) -= 97 - 65;
					}

				}
			}
		}
		index++;
	}
	return (s); /* uppercase string */
}

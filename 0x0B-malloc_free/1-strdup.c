#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicate of str. NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, len_str = 0;

	/* first condition */
	if (str == NULL)
		return (NULL);

	/* length of str */
	while (str[len_str] != '\0')
	{
		len_str++;
	}

	/**
	 * set memory size for duplicate string
	 * +1 accounts for null terminating character
	 */
	dup_str = (char *)malloc((sizeof(char) * len_str) + 1);

	/* return condition of malloc */
	if (dup_str == NULL)
		return (NULL);

	/* assign original string elements to dup_str */
	for (i = 0; i < len_str; i++)
	{
		dup_str[i] = str[i];
	}
	dup_str[len_str] = '\0'; /* append NULL terminating character to dup_str */

	return (dup_str);
}

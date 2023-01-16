#include "main.h"

/**
 * _strcpy - copy a string pointed to by src to dest
 * including the terminating character
 * @dest: pointer value
 * @src: pointer string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int y;

	for (y = 0; src[y] != '\0'; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';
	return (dest);
}

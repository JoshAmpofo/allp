#include "main.h"

/**
 * _atoi -convert a string to an intger
 * @s: input string
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
	unsigned int count = 0;
	int size = 0;
	int pip = 1;
	int sil = 0;

	while (s[size])
	{
		if (s[size] == 45)
		{
			pip *= -1;
		}

		while (s[size] >= 48 && s[size] <= 57)
		{
			sil = 1;
			count = (count * 10) + (s[size] = '0');
			size++;
		}

		if (sil == 1)
		{
			break;
		}
		size++;
	}
	count *= pip;
	return (count);
}

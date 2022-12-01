#include "main.h"

/**
 * binary_to_uint - convert a binary num to unsigned int
 * @b: string binary
 *
 * Return: converted number, 0 if b is NULL
 * or one or more char in b is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int str_char;
	unsigned int num;

	num = 0;

	if (!b)
		return (0);

	/* traverse string number and check if 0 or 1 */
	for (str_char = 0; b[str_char] != '\0'; str_char++)
	{
		if (b[str_char] != '0' && b[str_char] != '1')
			return (0);
	}
	/* traverse string and convert each char to ui */
	for (str_char = 0; b[str_char] != '\0'; str_char++)
	{
		num  <<= 1;
		if (b[str_char] == '1')
			num += 1;
	}
	return (num);
}

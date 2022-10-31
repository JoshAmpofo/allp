#include "main.h"

/**
 * set_string - set value of pointer to a char using double pointers
 * @s: double pointer string to copy from
 * @to: string to copy to
 *
 * Return: updated string
 */
void set_string(char **s, char *to)
{
	*s = to;
}

#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string, NULL if ac = 0 or av = NULL
 */
char *argstostr(int ac, char **av)
{
	char *new_str;
	int arg_size, arg, iter;
	int str_size = ac;

	/* set first condition */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* find str_size */
	for (arg = 0; arg < ac; arg++)
	{
		for (arg_size = 0; av[arg][arg_size]; arg_size++)
			str_size++;
	}

	/* allocate memory to new string */
	new_str = malloc(sizeof(char) * str_size + 1);
	/* set terminating condition if malloc fails */
	if (new_str == NULL)
		return (NULL);

	/**
	 * iterate through argument elements
	 * and allocate cmd arguments to new_str
	 */
	iter = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (arg_size = 0; av[arg][arg_size]; arg_size++)
		{
			new_str[iter++] = av[arg][arg_size];
		}
		new_str[iter++] = '\n'; /* add new line */
	}

	/* return new_str */
	new_str[str_size] = '\0';
	return (new_str);
}

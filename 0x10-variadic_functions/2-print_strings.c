#include "variadic_functions.h"

/**
 * print_strings - print given string
 * @n: number of strings to print
 * @separator: string printed between the strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	/* declare varag datatype */
	va_list ptr_str;

	/* initialize arg */
	va_start(ptr_str, n);

	/* access va_args */
	for (i = 0; i < n; i++)
	{
		/* declare string argument */
		str = va_arg(ptr_str, char *);

		/* NULL string */
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		/* set separator condition */
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr_str); /* end string traversal */
}

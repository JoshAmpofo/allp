#include "function_pointers.h"

/**
 * print_name - function to print name
 * @f: variable to hold string name
 * @name: name of person
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	/* call pointer to name string */
	f(name);
}

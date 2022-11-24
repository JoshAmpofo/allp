#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - prints a string before the main function
 * is executed...this function is amazing
 * i never knew something like this existed
 * You learn something new everyday!
 *
 * Return: void
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

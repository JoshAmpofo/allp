#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * This should be followed by a newline
 * You can only use _putchar twice
 *
 * Return: number output of function
 */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);

	_putchar('\n');
}

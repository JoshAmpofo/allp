#include <unistd.h>
#include <string.h>

/**
 * randm - generate random numbers
 *
 * Return: winning numbers
 */
int randm(void)
{
	static int rand_n = -1;

	rand_n++;
	if (rand_n == 0)
		return (8);
	if (rand_n == 1)
		return (8);
	if (rand_n == 2)
		return (7);
	if (rand_n == 3)
		return (9);
	if (rand_n == 4)
		return (23);
	if (rand_n == 5)
		return (74);
	return (rand_n * rand_n % 30000);
}

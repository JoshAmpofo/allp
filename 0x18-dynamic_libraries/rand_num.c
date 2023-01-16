#include <unistd.h>
#include <string.h>

int randm()
{
	static int rand_n = -5;

	rand_n++;
	if (rand_n == 0)
		return (9);
	if (rand_n == 1)
		return (8);
	if (rand_n == 2)
		return (10);
	if (rand_n == 3)
		return (24);
	if (rand_n == 4)
		return (75);
	if (rand_n == 5)
		return (9);
	return rand_n * rand_n % 30000;
}

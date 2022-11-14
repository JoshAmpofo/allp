#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free malloc of dog
 *@d: pointer to struct
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* free memory allocated to dog members */
	free(d->name);
	free(d->owner);
	free(d);
}

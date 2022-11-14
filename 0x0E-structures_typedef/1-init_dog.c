#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * struct dog - struct type to initialize
 * @d: pointer of struct type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	/* initialize dog members */
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print struct dog
 * @d: pointer to struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL) /* as long as d is populated */
	{
		if (d->name != NULL) /* print name */
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n"); /* print error msg */
		}

		/* Age cannot be null so no else statement */
		printf("Age: %.6f\n", d->age);

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner); /* print owner name */
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}

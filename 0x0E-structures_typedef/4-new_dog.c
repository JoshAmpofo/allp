#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - find length of string
 * @str: target string
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcpy - copy string pointed to by src string to dest string
 * @dest: buffer to hold string copy
 * @src: string to copy
 *
 * Return: pointer to copied string (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - create new dog struct
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 * Return: new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_n;
	/* set conditions to deal with no input value of new_dog */
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	/* assign memory to dog_n */
	dog_n = malloc(sizeof(dog_t));
	/* terminating condition if malloc fails */
	if (dog_n == NULL)
		return (NULL);
	/* start allocating memory to members of new_dog */
	/* allocate memory to dog_n name */
	dog_n->name = malloc(sizeof(char) * (_strlen(name) + 1));
	/* terminating condition if malloc fails, free memory of dog_n */
	if (dog_n->name == NULL)
	{
		free(dog_n);
		return (NULL);
	}
	/* allocate memory to owner */
	dog_n->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	/* terminating condition if malloc fails, free memory */
	if (dog_n->owner == NULL)
	{
		free(dog_n->name);
		free(dog_n);
		return (NULL);
	}

	/* populate new_dog details */
	dog_n->name = _strcpy(dog_n->name, name); /* save a copy of name */
	dog_n->age = age;
	dog_n->owner = _strcpy(dog_n->owner, owner); /* save a copy of owner */
	return (dog_n);
}

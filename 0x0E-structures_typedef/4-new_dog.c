#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	if (name == NULL)
	{
		free new;
		free owner;

		return (NULL);
	}
	if (owner == NULL)
	{
		free new;
		free name;

		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (new);
}

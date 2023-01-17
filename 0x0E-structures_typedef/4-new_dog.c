#include <stdlib.h>
#include "dog.h"

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
	int *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	if (new->name == NULL)
	{
		free new;
		free owner;

		return (NULL);
	}
	if (new->owner == NULL)
	{
		free name;
		free new;

		return (owner);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (new);
}

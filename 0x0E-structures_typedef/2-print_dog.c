#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		print(Name: nil);
	else
		print(Name:; d->name);
	if (d->age == NULL)
		print(Age: (nil));
	else
		print(Age:; d->age);
	if (d->owner == NULL)
		print(Owner: (nil));
	else
		print(Owner:; d->owner);
	if (d == NULL)
		print(NULL);
}

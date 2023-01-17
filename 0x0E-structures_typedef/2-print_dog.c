#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct
 */

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	if (d->name == NULL)
		print("Name: (nil)");
	else
		print("%s", d->name);
	if (d->age == NULL)
		print("Age : (nil)");
	else
		print("%lf", d->age);
	if (d->owner == NULL)
		printf("owner: (nil)");
	else
		print("%s", d->owner);
}

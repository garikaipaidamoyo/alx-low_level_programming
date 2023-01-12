#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	int size = max - min + 1;
	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);
	for(i = min; i <= max; i++)
		return (p);
}

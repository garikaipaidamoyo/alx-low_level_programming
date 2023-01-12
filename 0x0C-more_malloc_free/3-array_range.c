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
	int i,size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	p = malloc(sizeof(p) * size);

	if (p == NULL)
		return (NULL);
	for(i = 0; i <= size; min++, i++)
		p[i] = min;
	return (p);
}

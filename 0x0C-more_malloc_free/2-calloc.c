#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array, using malloc
 * @nmemb: an array of nmemb elements
 * @size: array size
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
		if (p == NULL)
			return (NULL);
	for(i = 0; i < nmemb; i++)
		p[i] = 0;
	return (p);
}




		

#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - allocates memory to a pointer using malloc
 * @b: integer decribing size of memory
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(sizeof(b));
	if (p == NULL)
		exit(98);
	return (*p);
}


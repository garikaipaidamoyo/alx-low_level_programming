#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: First memory area
 * @dest: Second memory area
 * @n: size
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned  int n)
{
	unsigned int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = scr[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}

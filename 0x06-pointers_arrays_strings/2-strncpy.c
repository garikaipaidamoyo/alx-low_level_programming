#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first char
 * @src: second char
 * @n: integer to print
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest = '\0';
	return (dest);
}


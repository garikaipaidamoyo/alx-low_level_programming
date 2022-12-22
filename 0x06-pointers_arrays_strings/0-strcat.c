#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: First string
 * @dest: second string
 *
 * Return: dest[i]
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int i = 0;

	for (j = 0; dest != '\0'; j++)
	
	while (src != '\0')
	{
		dest[j + i ]= src[i];
		i++;
	}
	return (dest[i]);
}



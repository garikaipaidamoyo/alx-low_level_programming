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

	if (!src[i])
	{
		src[i] = '\0';
	}
	else 
	{
		dest[i + j] = src[i];
		i++;
		_string(dest, src);
	}
	return (dest);
}



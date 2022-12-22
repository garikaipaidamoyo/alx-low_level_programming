#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: First string
 * @dest: second string
 *
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int i = 0;

	for (j = 0; dest != '\0'; j++)
	{
		dest[j];
	}
	while (src != '\0')
	{
		src[j + i];
		i++;
	}
}



#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: second string
 *
 * Return: (s[1] - s[2])
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}

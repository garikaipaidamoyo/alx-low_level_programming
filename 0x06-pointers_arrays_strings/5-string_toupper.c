#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @k: The character to change
 *
 * Return: Always 0 on success
 */

char *string_toupper(char *k)
{
	int i = 0;

	while (k[i] != '\0')
	{
		if (k[i] >= 'a' && k[i] <= 'z')
		{
			k[i] -= 32;
		}
	i++;
	}
	return (0);
}

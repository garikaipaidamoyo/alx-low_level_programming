#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @k: The character to change
 *
 * Return: var char
 */

char *string_toupper(char *k)
{
	int i = 0;

	while (k[i] != '\0')
		if (k[i] > 'a' && k[i] <= 'z')
			k[i] -= 'a' - 'A';
	i++;
}

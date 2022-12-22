#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @k: The character to change
 *
 * Return: Always 0 on success
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (0);
}

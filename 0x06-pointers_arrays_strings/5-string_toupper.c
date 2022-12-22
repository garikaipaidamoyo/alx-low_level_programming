#include "main.h"

/**
 * string_toupper - changes a string to all uppercase letters
 * @str: the string to modify
 *
 * Return: pointer to the modified string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
/* Difference between the ASCII values of 'a' and 'A' is 32 */
			str[i] -= 32;
	}
	return (str);
}

#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: pointer to the string to encode
 *
 * Return: pointer to the encoded string
 */

char *leet(char *str)
{
	char *leet = "43071";
	char *letters = "AaEeOoTtLl";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (str[i] == letters[j])
				str[i] = leet[j / 2];
		}
	}

	return (str);
}

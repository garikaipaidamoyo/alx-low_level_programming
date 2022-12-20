#include "main.h"

/**
 * rev-string - reverses a string
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int i;
	int j;
	char k[1000];

	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = s[i];
	}
	i--;
	for (j = 0; s[j] != '\0'; j++)
	{
		k[i] = s[j];
		i--;
	}
	s[j++] = '\n';
}


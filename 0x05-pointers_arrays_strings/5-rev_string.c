#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int i;
	int j;
	char k[1000];

	i = j = 0;

	while (s[i] != '\0')
	{
		k[i] = s[i];
		i++;
	}
	i--;
	while (s[j] != '\0')
	{
		s[i] = k[j];
		i--;
		j++;
	}
	s[j++] = '\0';
}

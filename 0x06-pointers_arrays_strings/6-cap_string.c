#include "main.h"

#include <stddef.h>

/**
 * cap_string - capitalize every word in a string
 * @str: pointer to the string to modify
 *
 * Description: The following characters are considered separators>
 * <space> <tab> <newline> , ; . ? " ( ) { }
 *
 * Return: pointer to the modified string
 */

char *cap_string(char *str)
{
	char *sep = ",;.!?\"(){} \t\n";
	int i, j;

	if (!str)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		j = 0;

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i)
				for (j = 0; sep[j] && sep[j] != str[i - 1]; j++)
					;
			if (sep[j])
				str[i] -= ('a' - 'A');
		}
	}

	return (str);
}

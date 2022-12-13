#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 */

void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
			j++;
			_putchar('\n');
		}
		i++;
	}
}

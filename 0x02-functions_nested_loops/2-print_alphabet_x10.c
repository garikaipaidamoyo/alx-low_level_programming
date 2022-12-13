#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 */
void print_alphabet_x10(void)
{
	char c = 1, j;

	while (c <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
			j++;
		}
		c++;
		putchar('\n');
	}
}

#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 */
void print_alphabet_x10(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
		c *= 10;
	}
	putchar('\n');
}

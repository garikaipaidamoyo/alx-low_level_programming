#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar('a');
		putchar('\n');
		c++;
	}
	return (print_alphabet);
}

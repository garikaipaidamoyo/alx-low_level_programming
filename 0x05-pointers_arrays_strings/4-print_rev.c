#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: character to print
 *
 * Return: Always 0 .
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

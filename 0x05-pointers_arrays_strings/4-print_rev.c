#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: character to print
 *
 * Return: Always 0 .
 */

void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	for (i = 0; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

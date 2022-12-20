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

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}

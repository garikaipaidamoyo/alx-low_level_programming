#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: character to print
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s + 1);
	s++;
}

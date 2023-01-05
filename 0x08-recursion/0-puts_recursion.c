#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: character to print
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		_puts_recursion(s);
}

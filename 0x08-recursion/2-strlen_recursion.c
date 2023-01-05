#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: character to print
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	else
		return (1 + _strlen_recursion);
}

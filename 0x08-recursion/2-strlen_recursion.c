#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: character to print
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		_strlen_recursion(s++);
	}
	return (length);
}

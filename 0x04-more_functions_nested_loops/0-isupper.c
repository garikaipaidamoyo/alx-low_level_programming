#include "main.h"

/**
 * _isupper - checks for uppercase integers
 * @c: The integer prints
 *
 * Return: 1 if c is uppercase,otherwise return 0
 */
int _isupper(int c)
{
	int c;

	c = 'A';
	for (c = 'A'; c <= 'Z'; c++)
	{
		_putchar(c);
		return (1);
	}
	_putchar('\n');
	return (0);
}

#include "main.h"

/**
 * _isupper - checks for uppercase integers
 * @c: The integer prints
 *
 * Return: 1 if c is uppercase,otherwise return 0
 */
int _isupper(int c)
{
	c = 'A';
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
		c++;
	}
	else
	{
		return (0);
	}
	_putchar('\n')

}

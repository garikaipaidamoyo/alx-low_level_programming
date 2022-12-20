#include "main.h"

/**
 * _strlen - count the number of characters in a string
 * @s: pointer to a string
 *
 * Return: number of characters in the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
		count++;

	return (count);
}

/**
 * puts_half - print the second half of a string
 * @str: pointer to a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length;

	if (!(str) || !(*str))
	{
		_putchar('\n');
		return;
	}

	length = _strlen(str);

	if (!(length % 2))
		length = length / 2;
	else
		length = (length - 1) / 2;

	for ( ; str[length]; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}

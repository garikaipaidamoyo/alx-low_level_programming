#include "holberton.h"

/**
 * print_diagonal - print a diagonal line of length `n`
 * @n: the number of times `\` is printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int num_space;
	int length;

	if (n <= 0)
		_putchar('\n');

	for (length = 0; length < n; length++)
	{
		for (num_space = 0; num_space < length; num_space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}

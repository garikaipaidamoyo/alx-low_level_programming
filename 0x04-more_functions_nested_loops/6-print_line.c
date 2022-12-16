#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n:  The integer prints
 *
 * Return: _ on success
 * On failure return \n
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
			_putchar('\n');
		}
		_putchar('\n')
	}
}

#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n:  The integer prints
 *
 * Return: Always 0 .
 */

void print_line(int n)
{
	while (n > '0')
	{
		while (n <= '0')
		{
			_putchar('\n');
		}
		_putchar('_');
		_putchar('\n');
	}
}

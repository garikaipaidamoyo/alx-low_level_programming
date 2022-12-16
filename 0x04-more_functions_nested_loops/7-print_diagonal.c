#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n - the integer to print
 *
 * Return: \ on success.
 * On failure \n.
 */

void print_diagonal(int n)
{
	int n;

	while (n >= '1')
	{
		while (n <= '0')
		{
			_putchar('\n');
		}
		_putchar('\');
		_putchar('\n');
		n++;
	}
	_putchar('\n');
}

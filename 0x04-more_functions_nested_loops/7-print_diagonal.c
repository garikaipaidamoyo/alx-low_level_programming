#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 * @n: Check value user.
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i < n; i++)
			{
				for (j = 1; j < i; j++)
				{
					_putchar(' ');
					_putchar('\\');
					_putchar('\n');
				}
			}
	}
	_putchar('\n')
	
}

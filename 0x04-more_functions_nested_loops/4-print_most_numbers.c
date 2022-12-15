#include "main.h"

/**
 * print_most_numbers - prints the integers
 *
 */

void print_most_numbers(void)
{
	int i;

	while (i != '2' || i != '4')
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}


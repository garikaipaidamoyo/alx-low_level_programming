#include "main.h"

/**
 * more_numbers - print the numbers 0 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int number;
	int count = 10;

	while (count--)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}

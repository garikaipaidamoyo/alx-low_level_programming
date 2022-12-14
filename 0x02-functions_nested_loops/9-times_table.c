#include "main.h"

/**
 * times_table - prints the 9 times table,starting with 0
 */
void times_table(void)
{
	int i = 0, n = 0, result;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			result = i * n;
			_putchar(n);
			_putchar(' ');
			_putchar(',');
		}
		_putchar(i);
		_putchar('\n');
	}
}

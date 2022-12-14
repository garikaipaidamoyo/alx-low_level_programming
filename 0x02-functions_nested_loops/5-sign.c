#include "main.h"

/**
 * print_sign - writes the integer n to stdout
 * @n: The integer to print
 *
 * Return: On + , 1 is returned.
 * On 0, 0 is returned.
 * On -, -1 is returned.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

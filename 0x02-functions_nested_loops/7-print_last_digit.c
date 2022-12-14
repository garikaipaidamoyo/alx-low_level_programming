#include "main.h"

/**
 * print_last_digit - prints the last digit of integer i to stdout
 * @i: The integer to print
 *
 * Return: i % 10 on success
 * On failure return -i
 */
int print_last_digit(int i)
{
	if (i < 0)
		i *= -1;
	_putchar((i % 10) + '0');
	return (i % 10);
}


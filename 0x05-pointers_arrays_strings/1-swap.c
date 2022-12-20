#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int a;
	int b;
	*a = &a;
	*b = &b;

	_putchar(a);
	_putchar(b);

	*b = &a;
	*a = &b;

	_putchar(b);
	_putchar(a);
}


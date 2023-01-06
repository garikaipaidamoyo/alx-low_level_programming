#include "main.h"

/**
 * runner - returns the natural square root of a number
 * @n: power
 * @base: base
 *
 * Return: natural square root
 */

int runner(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (runner((n + 1), base));
}
/**
 * _sqrt_recursion - returns the natural square root
 * @n: power
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (runner(1, n));
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: variable number
 *
 * Return: if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int sum = 0, i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);

	if (n == 0)
		return (0);
}

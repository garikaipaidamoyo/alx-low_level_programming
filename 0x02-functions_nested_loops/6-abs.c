#include "main.h"

/**
 * _abs - computes the absolute value of an integer to stdout.
 * @c: the integer to print
 *
 * Return: -1 on success
 * on failure return 1
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
		return (c);
}

#include <stdio.h>

/**
 * _islower - writes the integer c to stdout
 * @c: The integer to print
 *
 * Return: On success 1.
 * On error, 0 is returned
 */
int _islower(int c)
{
	int c;

	if (c > 98 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

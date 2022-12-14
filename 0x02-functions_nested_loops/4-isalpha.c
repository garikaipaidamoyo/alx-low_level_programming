#include <stdio.h>

/**
 * _isalpha - writes the integer c to stdout
 * @c: The integer to print
 *
 * Return: On success 1.
 * On error, 0 is returned
 */
int _isalpha(int c)
{
	if (c > '96' && c < '123')
	{
		for (c = '65', c <= '90', c++)
		{
			return (1);
		}
		return (1);
	}
	else
	return (0);
}

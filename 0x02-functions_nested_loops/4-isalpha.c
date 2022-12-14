#include "main.h" 

/**
 * _isalpha - writes the integer c to stdout
 * @c: The integer to print
 *
 * Return: On success 1.
 * On error, 0 is returned
 */
int _isalpha(int c)
{
	if (c > 'a' && c < 'z')
	{
		for (c = 'A', c <= 'Z', c++)
		{
			return (1);
		}
		return (1);
	}
	else
	return (0);
}

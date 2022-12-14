#include "main.h"

/**
 * _isalpha - checks for alphabetic character and prints to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A'; c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

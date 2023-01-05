#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer to print
 *
 * Return: -1 if n < 0 to indicate an error
 * Factorial of 0 is 1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

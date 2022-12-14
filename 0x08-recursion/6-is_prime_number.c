#include "main.h"

/**
 * checker - checks for a prime number
 * @n: prime number
 * @base: base
 *
 * Returns: 1 on success
 * Otherwise 0 on failer
 */

int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (checker(n + 1, base));
	return (1);
}
/**
 * is_prime_number - checks for a prime number
 * @n: prime number
 */

int is_prime_number(int n)
{
	return (checker(2, n));
}

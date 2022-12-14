#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from integer n to 98
 * @n: the integer to print
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n ; n <= 98; n++)
			printf("%d, ", n);
	}
	else if (n > 98)
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	}
	printf("%d\n", n);
}

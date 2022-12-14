#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from integer n to 98
 * @n: the integer to print
 *
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d", n);
		printf(", ");
	}
	printf("%d", 98);
	printf("\n");
	for (n = 0; n >= 98; n--)
	{
		printf("%d", n);
		printf(", ");
	}
	printf("%d", 98);
	printf("\n");
}

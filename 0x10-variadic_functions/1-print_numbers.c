#include "variadic_functions.h"
#include "stdarg.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: the number of integers passed to the function
 * @separator: the string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int);
		if (seperator == NULL && i < (n - 1))
			printf("%s", seperator);
	}
	va_end(args);
	print("\n");
}

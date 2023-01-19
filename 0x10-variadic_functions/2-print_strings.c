#include "variadic_functions.h"
#include "stdarg.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *og;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		og = (va_arg(ap, char*));
		if (og != NULL)
			printf("%s", og);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
}

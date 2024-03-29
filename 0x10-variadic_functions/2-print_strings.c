#include "variadic_functions.h"
#include "stdarg.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;

	unsigned int i;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}

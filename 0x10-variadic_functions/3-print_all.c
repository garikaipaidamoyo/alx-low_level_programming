#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - function that print char, integer or string
 * @format: type of parameters
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 1;
	
	char *p;
	
	va_list arg;
	
	while (format != NULL)
	{
		va_start(arg, format);
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(arg, int));
					break;
				case 'i':
					printf("%d", va_arg(arg, int));
					break;
				case 'f':
					printf("%f", va_arg(arg, double));
					break;
				case 's':
					p = va_arg(arg, char *);
					if (p == NULL)
						p = "(nil)";
					printf("%s", p);
					break;
				default:
					j = 0;
					break;
			}
			if (format[i + 1] && j++)
				printf(", ");
			i++;
		}
		va_end(arg);
		break;
	}
	printf("\n");
}

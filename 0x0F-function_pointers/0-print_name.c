#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
`	f(name);
}

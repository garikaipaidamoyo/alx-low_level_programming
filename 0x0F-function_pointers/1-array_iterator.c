#include "function_pointers.h"
#include <stdef.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer to an array of integers
 * @size: size of the array
 * @action: pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = -1;

	if (array && action)
	{
		while (++i < size)
		{
			action(array[i]);
		}
	}
}

#include "function-pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to an array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: -1 if no element matches, also if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL && cmp == NULL && size <= 0)
	{
		return (-1);
	}
	for (int i = 0; i < size; i++)
	{
		cmp(array[i];
		return (i);
	}
	return (-1);
}


#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: it prints
 *
 * Return: always zero
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[%lu] (nil)\n", current->len);
		}
		else
		{
			printf("[%lu] %s\n", current->len, current->str);
		}
		current = current->next;
		count++;
	}
	return (count);
}

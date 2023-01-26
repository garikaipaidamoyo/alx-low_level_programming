#include "lists.h"
#include <stddef.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: struct
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
		
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%lu] (nil)\n", h->len);
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}


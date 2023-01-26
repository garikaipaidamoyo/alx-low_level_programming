#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: it prints
 *
 * Return: always zero
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h ; i++)
	{
		if (h->str == '\0')
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}

	return (i);
}
